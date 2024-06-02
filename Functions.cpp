#include "Include.h"



//Code to handle cursor control 
void gotoxy(short x, short y) {

	//Use hStdout to gain control over the console
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//Delare x,y position of cursor
	COORD position = { x,y };
	//Gives control over cursor 
	SetConsoleCursorPosition(hStdout, position);
}


//Code for frame of UI
void Frame() {
	gotoxy(0, 0);
	//Starting from left
	cout << char(TOPLEFT);
	for (int i = 0; i < 98; i++) {
		cout << char(HORITUBE);
	}

	//Top right
	cout << char(TOPRIGHT) << endl;
	for (int i = 0; i < 27; i++) {
		cout << char(VERTUBE);
		gotoxy(99, 1 + i);
		cout << char(VERTUBE) << endl;
	}

	//Bottom left 
	cout << char(BOTTOMLEFT);
	for (int i = 0; i < 98; i++) {
		cout << char(HORITUBE);
	}
	//Bottom right 
	cout << char(BOTTOMRIGHT) << endl;
}


//Code for option 1 TYPE
void Option1() {

	//goto loction 
	gotoxy(5, 7);

	//Starting from left
	cout << char(TOPLEFTLI);
	for (int i = 0; i < 40; i++) {
		cout << char(HORILINE);
	}

	//Top right
	cout << char(TOPRIGHTLI) << endl;
	for (int i = 0; i < 5; i++) {
		gotoxy(5, 8 + i);
		cout << char(VERLINE);
		gotoxy(46, 8 + i);
		cout << char(VERLINE) << endl;
	}

	//Bottom left 
	gotoxy(5, 13);
	cout << char(BOTTOMLEFTLI);
	for (int i = 0; i < 40; i++) {
		cout << char(HORILINE);
	}
	//Bottom right 
	cout << char(BOTTOMRIGHTLI) << endl;

	//cout "type"
	gotoxy(6, 8);
	cout << "                " << "TYPING TEST";
	gotoxy(6, 9);
	cout << "       " << "Improve your typing skills";
	gotoxy(6, 11);
	cout << "     " << "Press enter when pointer is here";


}


//Code for option 2 LEADERBOARD
void Option2() {

	//goto loction 
	gotoxy(55, 7);

	//Starting from left
	cout << char(TOPLEFTLI);
	for (int i = 0; i < 40; i++) {
		cout << char(HORILINE);
	}

	//Top right
	cout << char(TOPRIGHTLI) << endl;
	for (int i = 0; i < 5; i++) {
		gotoxy(55, 8 + i);
		cout << char(VERLINE);
		gotoxy(96, 8 + i);
		cout << char(VERLINE) << endl;
	}

	//Bottom left 
	gotoxy(55, 13);
	cout << char(BOTTOMLEFTLI);
	for (int i = 0; i < 40; i++) {
		cout << char(HORILINE);
	}
	//Bottom right 
	cout << char(BOTTOMRIGHTLI) << endl;

	//cout "type"
	gotoxy(56, 8);
	cout << "                " << "LEADERBOARD";
	gotoxy(56, 9);
	cout << "     " << "See how you fare against others!";
	gotoxy(56, 11);
	cout << "     " << "Press enter when pointer is here";


}


//Code for option 3 QUIT
void Option3() {
	//goto loction 
	gotoxy(40, 17);

	//Starting from left
	cout << char(TOPLEFTLI);
	for (int i = 0; i < 32; i++) {
		cout << char(HORILINE);
	}

	//Top right
	cout << char(TOPRIGHTLI) << endl;
	for (int i = 0; i < 5; i++) {
		gotoxy(40, 18 + i);
		cout << char(VERLINE);
		gotoxy(73, 18 + i);
		cout << char(VERLINE) << endl;
	}

	//Bottom left 
	gotoxy(40, 23);
	cout << char(BOTTOMLEFTLI);
	for (int i = 0; i < 32; i++) {
		cout << char(HORILINE);
	}
	//Bottom right 
	cout << char(BOTTOMRIGHTLI) << endl;

	//cout "type"
	gotoxy(41, 19);
	cout << "             " << "QUIT";
	gotoxy(41, 20);
	cout << "       " << "Hope to see you soon!";
	gotoxy(41, 21);
	cout << "Press enter when pointer is here";
}


//Code for printing arrow symbol
void Arrow(int x, int y) {

	gotoxy(x, y);

	cout << "*";
	gotoxy(x, y + 1);
	cout << "**";
	gotoxy(x, y + 2);
	cout << "***";
	gotoxy(x, y + 3);
	cout << "**";
	gotoxy(x, y + 4);
	cout << "*";

}


//Code for clearing arrows
void Clear() {

	//Clear left most arrow
	int x = 2, y = 8; /* (2, 8);*/
	for (int i = 0; i < 5; i++) {
		gotoxy(x, y + i);
		cout << "   ";
	}

	x = 52;
	y = 8; /*(50, 8);*/
	//Clear right most arrow
	for (int i = 0; i < 5; i++) {
		gotoxy(x, y + i);
		cout << "   ";
	}

	x = 37;
	y = 18; /*(37, 18);*/
	//Clear bottom arrow
	for (int i = 0; i < 5; i++) {
		gotoxy(x, y + i);
		cout << "   ";
	}
}


//Code to clear console of all text
void ConsoleClear() {
	gotoxy(0, 0);
	for (int i = 0; i < 29; i++) {
		//Clear horizontol 
		for (int j = 0; j < 101; j++) {
			cout << " ";
		}
		cout << endl;
	}
}

//Code to make typing platform
void Textbox() {
	gotoxy(13, 14);
	//printing out line
	for (int i = 0; i < 75; i++) {
		cout << char(HORILINE);
	}
}

//Code to output sentence
void Text(char SentenceFin[],float total) {

	gotoxy(13, 13);
	for (int i = 0; i < total; i++) {
		cout << SentenceFin[i];
	}
	//if (total < 85) {
	//	gotoxy(13, 13);
	//	for (int i = 0; i < total; i++) {
	//		cout << SentenceFin[i];
	//	}
	//}
	//else if (total > 86) {
	//	gotoxy(13, 12);
	//	for (int i = 0; i < 65; i++) {
	//			cout << SentenceFin[i];
	//	}
	//	//continue in next line
	//	gotoxy(13, 13);
	//	for (int i = 64; i < total; i++) {
	//		cout << SentenceFin[i];
	//	}
	//}


}

//Code for accuracy checker 	
void Errorcount(char input[], char SentOutput[], float total, int& error_count) {
	//Comparing what user type and sentence 
	for (int i = 0; i < total; i++) {
		if (input[i] != SentOutput[i]) {
			error_count++;
		}
	}
	gotoxy(13, 18);
	cout << "No. of mistakes: " << error_count << endl;
}


//Code for accuracy calculator 
void Accuracy(float& acc, float total, int error_count) {
	acc = ((total - error_count) / total) * 100;
	gotoxy(13, 19);
	cout << "Accuracy: " << acc;
}

//asking user if they want to save their score 
void SaveScore() {
	gotoxy(12, 13);
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 85; j++) {
			cout << " ";
		}
		gotoxy(12, 13 + i);
	}

	gotoxy(25, 15);
	cout << "Do you want to save your score?";
	gotoxy(25, 16);
	cout << "Press ENTER to save or BACKSPACE to return to menu";
	gotoxy(25, 18);
	//condition
	int c = 0;

	switch (c = _getch()) {

	case BACKSPACE:
		//reload main menu screen
		ConsoleClear();
		break;

	case ENTER:
		//Input name 
		cout << "Input Name (No spaces):";
		string place;
		cin >> place;
		ConsoleClear();
		break;


	}


}

//Code for retrying the typing game again
void Retry(int &pos, bool &save) {
	gotoxy(15, 23);
	cout << "Do you want to retry?";
	gotoxy(13, 24);
	cout << "Press ENTER to try again or BACKSPACE to return to menu";
	gotoxy(13, 25);
	//condition
	int c = 0;

		switch (c = _getch()) {

		case BACKSPACE:
			//reload main menu screen
			pos = 0;
			SaveScore();
			break;

		case ENTER:
			////erase previous typing
			//bool save = false;
			//gotoxy(13, 16);
			//for (int i = 0; i < 8; i++) {

			//	for (int j = 0; j < 80; j++) {
			//		cout << " ";
			//	}
			//	gotoxy(13, 15 + i);
			//}
			////erase retry statement
			//gotoxy(15, 23);
			//cout << "                      ";
			//gotoxy(13, 24);
			//cout << "                                                       ";
			ConsoleClear();
			break;

		}

}





//Code for resetting values 
void ResetValues(float &total, int &error_count, float &acc, int &WPM, bool &Savescore) {
	//reset all values
	total = 0;
	error_count = 0;
	acc = 0;
	WPM = 0;
	Savescore = false;

	//reset timer positon
	gotoxy(35, 11);
	cout << "     ";
}


//void FullReset() {
//	Frame();
//	Option1();
//	Option2();
//	Option3();
//	ConsoleClear();
//}

//Counts down from 3 
void Countdown() {

	//3 second pause
	int pause = 3;
	//second
	seconds _1sec = seconds(1);
	//Go to location
	

	while (pause >= 1) {
		gotoxy(35, 11);
		cout << pause;

		//Pause for 1 second
		this_thread::sleep_for(_1sec);
		pause--;
		if (pause < 1) {
			gotoxy(35, 11);
			cout << " GO !";
		}
	}


}

////To choose a randome sentence 
//void Random() {
//
//	// Providing a seed value for randomizer so value can be different
//	srand((unsigned)time(NULL));
//
//	// Offset = 1
//	// Range = 5
//	int random = 1 + (rand() % 5);
//
//	switch (random) {
//
//	case 1:
//
//	}
//}




////Tracks how much time user spent typing
////void Timer(clock_t start, clock_t stop, double &fintime) {
////
////	float Totaltime;
////	Totaltime = (stop - start) / (double)CLOCKS_PER_SEC;
////
////}
//
////Calculates words per minute
//void WPM(float fintime, float total, int &WPM) {
//
//	//WPM =  characters/5 * 1/time 
//	//5 used to represent average lenght of words
//	WPM = (total / 5) * (1 / fintime);
//	
//
//
//}

//void Leaderboard() {
//
//}
