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
            if (filename == "Alps.txt")
                Alps.push_back(line);

            if (filename == "Carpathians.txt")
                Carpathians.push_back(line);

            if (filename == "Icelandic Highlands.txt")
                Icelandic_Highlands.push_back(line);
            
            if (filename == "Pyrenees.txt")
                Pyrenees.push_back(line);

            mountains.push_back(line);
        }
        file.close();
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
    //if statements on the different ranges
    std::string lowerRange = range;
    std::transform(lowerRange.begin(), lowerRange.end(), lowerRange.begin(), ::tolower);

    for (const std::string& mtn : mountains)
    {
        std::string lowerMtn = mtn;
        std::transform(lowerMtn.begin(), lowerMtn.end(), lowerMtn.begin(), ::tolower);

        if (lowerMtn == mountain)
        {
            std::stringstream mountainStream(mtn);
            std::string mountainRange;
            while (mountainStream >> mountainRange)
            {
                if (mountainRange.find(range) != std::string::npos)
                {
                    return true;
                }
            }
        }
    }

    return false;
}



//static std::random_device rd;
//static std::mt19937 mt(rd());
//std::uniform_int_distribution<int> dist(0, mountains.size() - 1);
//return mountains[dist(mt)];

//use commented code for second assignment