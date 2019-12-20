#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include "FileSystem.h" //header file included
using namespace std;
void menu();

int main()
{
	menu();
	return 0;
}

void menu()
{
	char choice; // stores the choice of user for the menu
	//========================Folder object created====================
	fileSystem* System = new fileSystem(10, 2); // declare a new object called System in the heap

	do {
		//====================Folders and files displayed==========================
		cout << "--------------------------------------------------" << endl;
		cout << "FILE SYSTEM" << endl;
		cout << "--------------------------------------------------" << endl;
		System->displayall();


		//====================Operation list================================
		cout << "a: create a new file (dummy)" << endl;
		cout << "b: delete an existing file" << endl;
		cout << "c: copy an existing file" << endl;
		cout << "s: search the system" << endl;
		cout << "q: quit the system" << endl;
		cout << "Enter an option" << endl;
		cin >> choice;
		switch (choice)
		{
		case 'a':
			cout << "Creating a new file" << endl; // dummy function

			break;
		case 'b': // when b is selected, delete selected file
			char filen[50]; // create an array
			cout << "Deleting an existing file" << endl;
			cout << "Select folder ([0] for WINDOWS or [1] for IOS)" << endl;
			int x; // stores the folder that is used
			cin >> x;
			while (x != 0 && x != 1)
			{
				cout << "Wrong input. Try again!" << endl; // check the input value, if it is not 0 or 1, ask the user to repeat
				cout << "Your input: ";
				cin >> x;
			}
			cin.getline(filen, 1); // clean up the stream
			cout << "Enter filename" << endl;
			cin.getline(filen, 50); // insert filename that will be deleted
			System->del(x, filen); // call the delete function
			break;
		case 'c':
		{
			System->copy();
			break;
		}
		case 's':
			cout << "\nSearch Result: " << endl;
			System->search(); // call the search function
			break;

		case 'q':
			cout << "Your progress is saved" << endl;
			cout << "Quitting the system" << endl;
			delete System;
			break;
		default:
			cout << "Invalid input" << endl; // when the input is invalid
			break;
		}


	} while (choice != 'q');//once q pressed the object in heap is destroyed and program halts

}
