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
    }
    else
    {
        cout << "Thats a shame... come back when you are ready to play" << endl;
        return 0;
    }

    std::string answer;
    int score = 0;
    int questions = 0;

    //    //while (answer != "exit" && answer != "quit")
    //    //{
    //        std::cout << "Which range is " << mountain << " in? ";
    //        std::getline(std::cin, answer);
    //
    //        if (answer == "exit" || answer == "quit")
    //        {
    //            break;
    //        }
    //
    //        if (mountains.checkRange(mountain, answer))
    //        {
    //            std::cout << "Correct!" << std::endl;
    //            score++;
    //        }
    //        else
    //        {
    //            std::cout << "Incorrect." << std::endl;
    //        }
    //
    //        questions++;
    //    }
    //
    //    std::cout << "You scored " << score << " out of " << questions << "." << std::endl;
    //
    return 0;
}

//Put your reading code in a function. Get all of your filenames in a vector. Iterate over the vector calling your function for each filename
