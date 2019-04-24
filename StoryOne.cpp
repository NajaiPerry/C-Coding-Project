#include "StoryOne.h"
#include <iostream>

using namespace std;

StoryOne::StoryOne()
{
    int choice;
    int choice2;
    int gold = 5000;
    gold = (gold - 750);

    cout << "\n Remaining Gold: " << gold << "\n";

    cout << "\n Week 1: You arrive at the construction site to find that Bill Joe is talking to the other workers at the site about the project.";
    cout << "\nAs you listen in to Joe speech you hear gun shoots in the distance reminding you that your site isn't in the best part of town. \n ";

    cout << "\n Week 21: You arrive back at the construction site early in to check on the process. You find that some important equipment has be stolen.";
    cout << "\n The amount of equipment stole may cost you 1000 gold. \n";
    cout << "\n 1) Pay the 1000 gold";
    cout << "\n 2) Have the assisting contractor handled it \n";
    cout << "\n   Enter in your choice: ";
    cin >> choice;
    while(true)
    {

        if (choice == 1)
        {
            gold = gold - 1000;
            cout << "\n Remaining Gold: " << gold << "\n";
            break;
        }

        else if (choice == 2)
        {
            cout << "\n The assisting contractor was able to cut the price in half and you will only be charged 500 gold";
            gold = gold - 500;
            break;
        }
        else
            cout << "\n invalid statement \n ";
            cout << "\n 1) Pay the 1000 gold\n ";
            cout << "\n 2) Have the assisting contractor handled it \n";
            cout << "\n   Enter in your choice: ";
            cin >> choice;
    }

    cout << "\n Week 49: You receive a email from your assisted contractor that one of your works have been injured and wants 200 gold for medicial expenses. \n";
    cout << "\n 1) Pay the 200 gold\n ";
    cout << "\n 2) Have the assisting contractor handled it";

    cout << "\n   Enter in your choice: ";
    cin >> choice2;

    while(true)
    {
        if (choice2 == 1)
        {
            gold = gold - 200;
            cout << "\n Remaining Gold: " << gold << "\n";
            break;
        }

        else if (choice2 == 2)
        {
            cout << "\n The contractor was able to lower the price down to 50 gold \n";
            gold = gold - 50;
            break;
        }
        else
            cout << "\n invalid statement \n";
            cout << "\n 1) Pay the 200 gold\n ";
            cout << "\n 2) Have the assisting contractor handled it";
            cout << "\n   Enter in your choice: ";
            cin >> choice2;
    }



    cout << "\n Week 70: You good back to the site and find that your assisted contractor made a small mistake that will cost you 350 gold. \n ";

    gold = gold - 350;
    cout << "\n Remaining Gold: " << gold << "\n";


    cout << "\n Final Week: You arrive at the site to look over the finished work and see that everything looks good. \n ";

    // Add a ending

}
