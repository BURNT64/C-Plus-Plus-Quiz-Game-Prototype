#include "Mountains.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

Mountains::Mountains(std::vector<std::string>& filenames)
{
    int main();
    {
        ifstream file1("Alps.txt");
        ifstream file2("Carpathians.txt");
        ifstream file3("Icelandic Highlands.txt");
        ifstream file4("Pyrenees.txt");//gets an input file stream to read file
        vector<string> lines;       //vector to store each line from the file
        string line;                //temp storage for each line
        while (getline(file1, line))  //getline returns false at end of file
        {
            lines.push_back(line);
        }

        while (getline(file2, line))  
        {
            lines.push_back(line);
        }

        while (getline(file3, line))  
        {
            lines.push_back(line);
        }

        while (getline(file4, line))  
        {
            lines.push_back(line);
        }

        for (auto i : lines)
            cout << i << endl;
    }
}

std::string Mountains::getRandomMountain()
{
    return" ";
}

bool Mountains::checkRange(std::string mountain, std::string range)
{
	return true;
}