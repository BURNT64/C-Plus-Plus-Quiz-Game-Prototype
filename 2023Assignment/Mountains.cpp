#include "Mountains.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>
#include <random>

using namespace std;

std::vector<std::string> mountains;
std::vector<std::string> textFiles;

Mountains::Mountains(std::vector<std::string>& filenames)
{
    for (const std::string& filename : filenames)
    {
        std::ifstream file(filename);
        std::string line;

        while (std::getline(file, line))
        {
            textFiles.push_back(line);
        }
        file.close();
    }

    for (const std::string& line : textFiles)
    {
        mountains.push_back(line);
    }
}

std::string Mountains::getRandomMountain()
{
    static std::random_device rd;
    static std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, mountains.size() - 1);

    return mountains[dist(mt)];
}

bool Mountains::checkRange(std::string mountain, std::string range)
{
        for (const std::string& mtn : mountains)
    {
        if (mtn == mountain && mtn.find(range) != std::string::npos)
        {
            // The mountain is present in the range, so return true
            return true;
        }
    }
    // If we reach here, the mountain was not found in the range, so return false
    return false;
}