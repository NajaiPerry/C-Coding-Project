#include <iostream>
#include "StoryThree.h"

using namespace std;

StoryThree::StoryThree()
{
    int choice;
    int choice2;
    int gold = 5000;
    gold = (gold - 1500);

    cout << "\n Remaining Gold: " << gold << "\n";

    cout << "Week 1: You arrive at the construction site to find that Bill Joe is talking to the other workers at the site about the project.";
    cout << "As you listen in to Joe speech you see the other skyscrapers towering over your construction site. \n";

    cout << "\n Week 21: You arrive back at the construction site early in to check on the process. You find that some important equipment has be stolen.";
    cout << "The amount of equipment stole may cost you 250 gold.\n";
    cout << "\n 1) Pay the 250 gold \n";
    cout << "\n 2) Have the assist contractor handled it \n";

    cout << "\n   Enter in your choice: ";
    cin >> choice;

    while(true)
    {
        if (choice == 1)
        {
            gold = (gold - 250);
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else if (choice == 2)
        {
            cout << "The police were able to find your equipment undamaged \n";
            break;
        }
        else
            cout << "invalid statement \n";
            cout << "\n 1) Pay the 250 gold\n ";
            cout << "\n 2) Have the assist contractor handled it\n ";
            cout << "\n   Enter in your choice: ";
            cin >> choice;
    }

    cout << " Week 49: You receive a email from your assisted contractor that one of your works have been injured and wants 200 gold for medical expenses.\n ";
    cout << "\n 1) Pay the 200 gold";
    cout << "\n 2) Have the assistant contractor handled it \n";

    cout << "\n   Enter in your choice: ";
    cin >> choice2;

    while(true)
    {
        if(choice2 == 1)
        {
            gold = gold - 200;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else if(choice2 == 2)
        {
            cout << "Your contractor was able to lower the bill down to 50 gold";
            gold = gold - 50;
            cout << "Remaining Gold: " << gold << "\n";
            break;
        }
        else
            cout << "invalid statement \n";
            cout << "\n 1) Pay the 200 gold\n ";
            cout << "\n 2) Have the assistant contractor handled it \n";
            cout << "\n   Enter in your choice: ";
            cin >> choice2;
    }

        cout << "Week 70: You good back to the site and find that your assisted contractor made a small mistake that will cost you 350 gold. \n";

		gold = gold - 350;
		cout << "Remaining Gold: " << gold << "\n";

		cout << "\n Final Week: You arrive at the site to look over the finished work and see that everything looks good. \n";


}
