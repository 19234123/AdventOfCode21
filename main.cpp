#include "Functions.h"

string filePath = R"(C:\Dev\Text_files\input.txt)";

int main() {
    vector<string> rawInput = readFile(filePath);

    // Part 1
    int previousDepth = std::stoi(rawInput[0]);
    int timesIncreased = 0;
    for (const auto& line: rawInput) {
        int currentDepth = std::stoi(line);
        if (currentDepth > previousDepth) {
            timesIncreased++;
        }
        previousDepth = currentDepth;
    }

    cout << "Part 1: " << timesIncreased << endl;

    // Part 2
    timesIncreased = 0;
    int currentTotal = 0;
    int nextTotal = 0;
    for (int i=0; i<rawInput.size()-3; i++) {
        for (int j=i; j<i+3; j++) {
            currentTotal += std::stoi(rawInput[j]);
            nextTotal += std::stoi(rawInput[j+1]);
        }

        if (nextTotal > currentTotal) {
            timesIncreased++;
        }

        currentTotal = 0;
        nextTotal = 0;
    }

    cout << "Part 2: " << timesIncreased;
    return 0;
}
