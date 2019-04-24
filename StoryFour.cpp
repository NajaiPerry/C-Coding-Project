#include <iostream>
#include "StoryFour.h"

using namespace std;

StoryFour::StoryFour()
{
    int choice;
    int choice2;
    int choice3;
    int gold = 5000;
    gold = (gold - 500);

    cout << "\n Remaining Gold: " << gold << "\n";

    cout << "Week 1: You arrive at the construction site to find that Joe Bill is talking to the other workers at the site about the project.";
    cout << "As you listen in to Bill speech you hear gun shoots in the distance reminding you that your site isn't in the best part of town. \n";

    cout << "\n Week 21: You arrive back at the construction site early in to check on the process. You find that some important equipment has be stolen.";
    cout << "The amount of equipment stole may cost you 1000 gold.\n";
    cout << "\n 1) Pay the 1000 gold";
    cout << "\n 2) Have the assistant contractor handed it \n";

    cout << "\n   Enter in your choice: ";
    cin >> choice;

    while(true)
    {
        if(choice == 1)
        {
            gold = gold - 1000;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else if (choice == 2)
        {
            cout << "The assisting contractor accidentally ordered expensive new equipment costing you 1250 \n";
			gold = gold - 1250;
			cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else
            cout << "invalid statement \n";
            cout << "1) Pay the 1000 gold\n ";
            cout << "2) Have the assistant contractor handed it \n";
            cout << "\n   Enter in your choice: ";
            cin >> choice;
    }

    cout << "Week 49: You receive a email from your assisted contractor that one of your works have been injured and wants 200 gold for medical expenses.\n";
    cout << "\n 1) Pay the 200 gold";
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
            cout << "The worker is now suing you for 500 gold\ n";
            cout << "\n 1) Pay 500 gold\n ";
            cout << "\n 2) Go to court\n ";
            cin >> choice3;

            if (choice3 == 1)
            {
                gold = gold - 500;
                cout << "Remaining Gold: " << gold << "\n";
                break;
            }
            else if(choice3 == 2)
            {
                cout << "You lose in court and must now pay out 200 gold in fees plus the 500 gold in the lawsuit.";
                gold = gold - 700;
                cout << "Remaining Gold: " << gold << "\n";
                break;
            }
            else
                cout << "invalid statement \n";
                cout << "\n 1) Pay 500 gold\n ";
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
