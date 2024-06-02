//Main.cpp, all the process appear here

#include <Windows.h> //for cursor control 
#include "Functions.h"
#include <iostream>
#include <conio.h> // for _getch()

using namespace std;

int main()
{

	Frame();

	//type box
	Option1();
	
	//leaderboard box
	Option2();

	//Quit button 
	Option3();

	//Key instructions 
	gotoxy(5, 26);
	cout << "Use KEY_DOWN, KEY_LEFT, KEY_RIGHT";
	gotoxy(5, 27);
	cout << "To move around in the menu screen";

    //Variables for key inputs
	int c = 0;
	bool condition = false;

	//Code for menu inputs 
	while (condition != true) {

		switch (c = _getch()) {

		case KEY_UP:

			cout << endl << "Up" << endl;//key up
			break;

		case KEY_DOWN:
			Clear();
			Arrow(37, 18);
			cout << endl << "Down" << endl; // key down
			break;

		case KEY_LEFT:
			Clear();
			Arrow(2, 8);

			break;

		case KEY_RIGHT:
			Clear();
			Arrow(52, 8);

			break;

		case ENTER:

			
			condition = true;
			break;

		}
	}
    
        

    
    
    
}


