#include "StoryTwo.h"
#include <iostream>

using namespace std;

StoryTwo::StoryTwo()
{
    int choice;
    int choice2;
    int gold = 5000;
    gold = (gold - 1050);

    cout << "\n Remaining Gold: " << gold << "\n";

    cout << "\n Week 1: You arrive at the construction site to find that Bill Joe is talking to the other workers at the site about the project.\n ";
    cout << "As you listen in to Joe speech you able to see that Fine Art Museum building from were you are standing.\n ";

    cout << "\n Week 21: You arrive back at the construction site early in to check on the process. You find that some important equipment has be stolen.\n ";
    cout << "The amount of equipment stole may cost you 500 gold.\n ";

    cout << "\n 1) Pay the 500 gold ";
    cout << "\n 2) Have the assist contractor handled it \n ";

    cout << "\n   Enter in your choice: ";
    cin >> choice;

    while(true)
    {
        if (choice == 1)
        {
            gold = gold - 500;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }

        else if (choice == 2)
        {
            cout << "\n Your assisting contractor was able to cut the price in half and you will only be charged 250 gold";
            gold = gold - 250;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else
            cout << "\n invalid statement \n";
            cout << "\n 1) Pay the 500 gold \n";
            cout << "\n 2) Have the assist contractor handled it \n ";
            cout << "\n   Enter in your choice: ";
            cin >> choice;
    }

    cout << "\n Week 49: You receive a email from your assisted contractor that one of your works have been injured and wants 200 gold for medicial expenses.\n ";
    cout << "\n 1) Pay the 200 gold";
    cout << "\n 2) Have the assist contractor handled it\n";

    cout << "\n   Enter in your choice: ";
    cin >> choice2;

    while(true)
    {
        if (choice2 == 1)
        {
            gold = gold - 200;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }

        else if (choice2 == 2)
        {
            cout << "Your assisting contractor was able to lower the bill down to 50 gold.\n ";
            gold = gold - 50;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else
            cout << " \n invalid statement\n ";
            cout << "\n 1) Pay the 200 gold";
            cout << "\n 2) Have the assist contractor handled it\n";
            cout << "\n   Enter in your choice: ";
            cin >> choice2;

    }

    cout << "Week 70: You good back to the site and find that your assisted contractor made a small mistake that will cost you 350 gold.\n ";
    cout << "Final Week: You arrive at the site to look over the finished work and see that everything looks good. \n ";

    // Add ending

}
