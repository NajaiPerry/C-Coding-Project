#include "StoryFive.h"
#include <iostream>

using namespace std;

StoryFive::StoryFive()
{
    int choice;
    int choice2;
    int choice3;
    int gold = 5000;
    gold = (gold - 800);

    cout << "\n Remaining Gold: " << gold << "\n";

    cout << "Week 1: You arrive at the construction site to find that Joe Bill is talking to the other workers at the site about the project.";
    cout << "As you listen in to Joe speech you able to see that Fine Art Museum building from were you are standing.\n";

    cout << "\n Week 21: You arrive back at the construction site early in to check on the process. You find that some important equipment has be stolen.";
    cout << "The amount of equipment stole may cost you 750 gold.\n";

    cout << "\n 1) Pay the 750 gold\n ";
    cout << "\n 2) Have the assistant contractor handed it \n";

    cout << "\n   Enter in your choice: ";
    cin >> choice;

     while(true)
    {
        if(choice == 1)
        {
            gold = gold - 750;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else if (choice == 2)
        {
            cout << "The assisting contractor accidentally ordered expensive new equipment costing you 1000 \n";
			gold = gold - 1000;
			cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else
            cout << "invalid statement \n";
            cout << "\n 1) Pay the 1000 gold\n ";
            cout << "\n 2) Have the assistant contractor handed it \n";
            cout << "\n   Enter in your choice: ";
            cin >> choice;
    }

    cout << "Week 49: You receive a email from your assisted contractor that one of your works have been injured and wants 200 gold for medical expenses.\n";
    cout << "\n 1) Pay the 200 gold\n ";
    cout << "\n 2) Have the assistant contractor handed it \n";

    cout << "\n   Enter in your choice: ";
    cin >> choice2;

    while (true)
    {
        if(choice2 == 1)
        {
            gold = gold - 200;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else if (choice2 == 2)
        {
            cout << "The worker is now suing you for 600 gold\ n";
            cout << "\n 1) Pay 600 gold\n ";
            cout << "\n 2) Go to court\n ";
            cin >> choice3;

            if (choice3 == 1)
            {
                gold = gold - 600;
                cout << "Remaining Gold: " << gold << "\n";
                break;
            }
            else if(choice3 == 2)
            {
                cout << "You lose in court and must now pay out 200 gold in fees plus the 600 gold in the lawsuit.";
                gold = gold - 800;
                cout << "Remaining Gold: " << gold << "\n";
                break;
            }
            else
                cout << "invalid statement \n";
                cout << "\n 1) Pay 600 gold\n ";
                cout << "\n 2) Go to court\n ";
                cin >> choice3;

        }
        else
            cout << "invalid statement \n";
            cout << "\n 1) Pay the 200 gold\n ";
            cout << "\n 2) Have the assistant contractor handed it \n";
            cout << "\n   Enter in your choice: ";
            cin >> choice2;
    }

    cout << "Week 70: You good back to the site and find that your assisted contractor made a big mistake that will cost you 750 gold.\n";
    gold = gold - 750;
    cout << "Remaining Gold: " << gold << "\n";
    cout << "\n Final Week: You arrive at the site to look over the finished work and see that everything looks good.";
}

