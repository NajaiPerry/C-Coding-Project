#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int choice;
	string first_name;
	string last_name;
	string line,balance; 
	string account_number;
	
	void create_file(ofstream outfile);
	void show_file();
	void search_file();
	void update_file();
	void delete_file();
	void quit();



void create_file()
{
	ofstream outfile;

	cout << "\n Please enter in a account nummber : ";
	cin >> account_number;
	
	cout << "\n Your new account number is : " + account_number + "\n";
	
	cout << "\n Enter your first name : ";
	cin >> first_name;
	
	cout << "\n Enter your last name : ";
	cin >> last_name;
	
	cout << "\n Enter your balance : ";
	cin >> balance;
	
	
	ifstream ((first_name + last_name + ".txt").c_str());	// Creating a text file with lable with customers name
	
	outfile.open ((first_name + last_name + ".txt").c_str());	// opening outfile
	
	outfile << "Account Number : " + account_number + "\n" + "first name : " + first_name + "\n" + "Last name : " + last_name + "\n" + "Balance : " + "$" + balance << endl; // storing account information inside test doc
}


void show_file()
{
	string first_name_show;
	string last_name_show; 
	string ch;
	cout << "Please enter in the first name of the account : ";
	cin >> first_name_show;
	
	cout << "Please enter in the last name of the account : ";
	cin >> last_name_show;
	
	
	ifstream inFile;
	
	if(inFile)
	{
		inFile.open((first_name_show + last_name_show + ".txt").c_str());
		
		string line;
		
		while (getline (inFile,line))
		{
			cout << "\n" + line << "\n";
		}
		
		inFile.close();
		
	}
	else
	{
		cout << "The file " + first_name_show + " " + last_name_show + " was not found ";
	}	
}	

void search_file()
{
	string first_name_search;
	string last_name_search;
	
	cout << "Please enter in the first name of the account : ";
	cin >> first_name_search;
	
	cout << "Please enter in the last name of the account : ";
	cin >> last_name_search;
	
	
	ifstream inFile ((first_name_search + last_name_search + ".txt").c_str());
	
	if(!inFile)
	{
		cout << "The file " + first_name_search + " " + last_name_search + " was not found ";
	}
	else
	{
		cout << "The file " + first_name_search + " " + last_name_search + " was found ";
	}	
}


void update_file()
{
	string first_name_search;
	string last_name_search;
	
	cout << "Please enter in the first name of the account : ";
	cin >> first_name_search;
	
	cout << "Please enter in the last name of the account : ";
	cin >> last_name_search;
	
	
	fstream inFile;
	
	while(inFile)
	{
		string update;
		cout << "What would you like to update (balance, account number, first name, last name, exit) ";
		cin >> update;
		
		if (update == "balance")
		{
			inFile.open((first_name_search + last_name_search + ".txt").c_str());
			
			while(getline(inFile,line))
			{
				cout << "\n Enter your balance : ";
				cin >> balance;
				line.replace(line.find(balance),balance.length(),"");
				inFile << line << endl; 
			}
			inFile.close();		
		}

	}
	
	
		
}

void delete_file()
{
	string first_name_delete;
	string last_name_delete;
	
	cout << " Plase enter in the first name of the file you would like to remove : ";
	cin >> first_name_delete;
	cout << " Plase enter in the first name of the file you would like to remove : ";
	cin >> last_name_delete;
	
	remove((first_name_delete + last_name_delete + ".txt").c_str());
	
}

void quit()
{
	cout << "Okay, thank you and goodbye. ";
}

int main()
{
	
	while (choice != 6)
	{
	
	
	cout << "\n1: Create record to file \n";
	cout << "2: Show record from file \n";
	cout << "3: Search Record from file \n";
	cout << "4: Update Record \n";
	cout << "5: Delete Record \n";
	cout << "6: Quit \n";
	
	
	cout << "\nEnter in your choice: ";
	cin >> choice;
	
	
	
	switch (choice)  
	{
		case 1:
			create_file();
			break;
		case 2:
			show_file();
			break;
		case 3:
			search_file();
			break;
		case 4:
			update_file();
			break;
		case 5:
			delete_file();
			break;
		case 6:
			quit();
			break;
 	}
	
	}
	return 0;
}


	
	
	
	
	
	

