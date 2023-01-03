#include "Mountains.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>
#include <random>

using namespace std;

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
    static bool seeded = false;
    // seed the random number generator if it has not been seeded yet
    if (!seeded)
    {
        srand(0); // seed the generator with a fixed value
        seeded = true; // set the seeded flag to true to prevent reseeding
    }
    // generate a random index within the range of the mountain names vector
    int randomIndex = rand() % mountains.size();
    // return the mountain name at the random index
    return mountains[randomIndex];
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


//static std::random_device rd;
//static std::mt19937 mt(rd());
//std::uniform_int_distribution<int> dist(0, mountains.size() - 1);
//return mountains[dist(mt)];

//use commented code for second assignment