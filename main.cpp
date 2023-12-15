#include "Functions.h"

string filePath = R"(C:\Dev\Text_files\input.txt)";

int main() {
    vector<string> rawInput = readFile(filePath);

    // Part 1
    long position = 0;
    long depth = 0;
    for (const auto &line : rawInput) {
        vector<string> splitLine = splitLineToString(line, ' ');

        if (splitLine[0] == "forward") {
            position += std::stoi(splitLine[1]);
        } else if (splitLine[0] == "down") {
            depth += std::stoi(splitLine[1]);
        } else {
            depth -= std::stoi(splitLine[1]);
        }
    }
    cout << "Part 1: " << (depth * position) << endl;

    // Part 2
    position = 0;
    depth = 0;
    long aim = 0;
    for (const auto &line : rawInput) {
        vector<string> splitLine = splitLineToString(line, ' ');

        if (splitLine[0] == "forward") {
            int lineValue = std::stoi(splitLine[1]);
            position += lineValue;
            depth += aim * lineValue;
        } else if (splitLine[0] == "down") {
            aim += std::stoi(splitLine[1]);
        } else {
            aim -= std::stoi(splitLine[1]);
        }
    }
    cout << "Part 2: " << (depth * position) << endl;
    return 0;
}
