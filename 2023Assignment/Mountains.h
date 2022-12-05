#pragma once
#include<vector>
#include<string>
#include<iostream>
#include<fstream>

class Mountains
{
public:
	//Time complexity: 
	Mountains(std::vector<std::string>& filenames);

	//Time complexity:
	std::string getRandomMountain();

	//Time complexity:
	bool checkRange(std::string mountain, std::string range);
};