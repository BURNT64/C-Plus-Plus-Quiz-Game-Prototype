#include "Mountains.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout << "---------------------------------------------------------------\n";
    cout << "Guess the random mountain!!!! Created by Will Allwood 2022-2023\n";
    cout << "---------------------------------------------------------------\n\n";
    cout << "Welcome to the game!\n\n";
    cout << "You will be repeatedly presented with random mountain names and must guess which of four mountain ranges it is in\n\n";

    string UserResponse;
    cout << "Are you ready to take the quiz?\n\n"
        "yes/no" << endl;
    cin >> UserResponse;

    if (UserResponse == "yes")
    {
        cout << endl;
        cout << "Wonderful let the game begin!!!" << endl;
        cout << "You will be given a series of random mountains based of 4 mountain ranges" << endl;
        cout << "These mountain ranges are: Alps, Carpathians, Icelandic Highlands, and Pyrenees" << endl;
        cout << "You will need to spell these correctly (as said above in order to recieve a point" << endl;
        cout << "So say if X mountain is in the Alps i would type ALps when prompted" << endl;
        cout << "This program is designed to run until you wish to exit the program" << endl;
        cout << "If you wish to exit the program at any time simply type exit instead of an answer" << endl;
        cout << "your points will be tallied up based on how many questions you answered/got right" << endl;
        cout << "Good luck!!!\n" << endl;
    }
    else
    {
        cout << "Thats a shame... come back when you are ready to play" << endl;
        return 0;
    }

    std::vector<std::string> filenames = { "Alps.txt", "Carpathians.txt", "Icelandic Highlands.txt", "Pyrenees.txt" };
    // create a Mountains object
    Mountains mountains(filenames);

    int score = 0; // keep track of the user's score
    int questions = 0; // keep track of the number of questions asked
    std::string mountain; // mountain name
    std::string range; // mountain range

    while (true)
    {
        // get a random mountain name
        mountain = mountains.getRandomMountain();
        std::cout << "Which range is " << mountain << " in? ";
        std::cin >> range;
        // check if the user wants to exit
        if (range == "exit" || range == "quit")
            break;
        questions++;
        // check if the mountain belongs to the specified range
        if (mountains.checkRange(mountain, range)) {
            std::cout << "\nCorrect, " << mountain << " is in the " << range << " range.\n";
            score++;
        }
        else {
            std::cout << "\nIncorrect, " << mountain << " is not in the " << range << " range.\n";
        }
    }
    std::cout << "\nAll done! You scored " << score << " out of " << questions << " questions.\n";
    cout << "Thanks for playing!!!\n" << endl;
    return 0;
}