#include <iostream>
#include "StoryOne.h"
#include "StoryTwo.h"
#include "StoryThree.h"
#include "StoryFour.h"
#include "StoryFive.h"
#include "StorySix.h"

using namespace std;
void intro();
void intro2();

int gold = 5000;
int endgamegold = 0;
int choice = 0;
int choice2 = 0;

void intro()
{

    if (choice == 1)
    {
        cout << "\n You have chosen Greater Third Ward as your location \n";
    }

    if (choice == 2)
    {
        cout << "\n You have chosen Museum District as your location \n";
    }

    if (choice == 3)
    {
        cout << "\n You have chosen Downtown as your location \n";
    }

    cout << "\n Now that you have picked a location it's time to pick an assisted contractor to help you on the job. \n ";
}

void intro2()
{
    if (choice2 == 1)
    {
       cout << "\n Have chosen Bill Joe as your assisting contractor for this project \n ";
    }

    if (choice2 == 2)
    {
       cout << "\n Have chosen Joe Bill as your assisting contractor for this project \n ";
    }

}



int main()
{
    cout << "Welcome to Tower Build where you have been tasked to build the world's second largest building in Houston, Texas.\n";
    cout << "\n When picking your choice, you will type in the number that corresponds with that choice. \n"; // rules
    cout << "\nThe contractor that you work for has loaned you 5000 gold to complete this project.\n";
    cout << "\nThe first task on your agenda is to pick a location for you to build your building.\n";

    while (choice != 3)
    {
        cout << "\n   1. Greater Third Ward -(Crime: High, Cost: 250 gold, Tourism: Low \n \n";
        cout << "\n   2. Museum District -(Crime: Medium, Cost: 550 gold, Tourism: Medium \n \n";
        cout << "\n   3. Downtown - (Crime: Low, Cost: 1000 gold, Tourism: High \n \n";

        cout << "\n   Enter in your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                intro();
                break;
            case 2:
                intro();
                break;
            case 3:
                intro();
                break;
        }
        break;
    }

    while (choice2 != 2)
    {
        cout << "\n   1. Bill Joe (15 years of experience, 2 major project in the past, Cost: 500) \n";
        cout << "\n   2. Joe Bill (5 years of experience, 2 major project in the past, Cost: 250) \n";

        cout << "\n Enter in your choice: ";
        cin >> choice2;

        switch (choice2)
        {
            case 1:
                intro2();
                break;
            case 2:
                intro2();
                break;
            case 3:
                intro2();
                break;
        }


    if (choice == 1 && choice2 == 1) // story 1
    {
        StoryOne One;
    }

    if (choice == 2 && choice2 == 1) // story 2
    {
        StoryTwo Two;
    }

    if (choice == 3 && choice2 == 1) // story 3
    {
        StoryThree Three;
    }

    if (choice == 1 && choice2 == 2) // story 4
    {
        StoryFour Four;
    }

    if (choice == 2 && choice2 == 2) // story 5
    {
        StoryFive Five;
    }
    if (choice == 3 && choice2 == 2) // story 6
    {
        StorySix Six;
    }

    return 0;
}
}
