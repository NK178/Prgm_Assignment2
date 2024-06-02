//Code for all the functions 
// For console control 
#include <Windows.h>  
// For ASCII code for UI 
#define VERTUBE 186
#define HORITUBE 205
#define TOPRIGHT 187
#define BOTTOMRIGHT 188
#define BOTTOMLEFT 200
#define TOPLEFT 201


//Code to handle cursor control 
void gotoxy(short x, short y) {

	//Use hStdout to gain control over the console
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//Delare x,y position of cursor
	COORD position = {x,y};
	//Gives control over cursor 
	SetConsoleCursorPosition(hStdout, position);
}

//Code for frame of UI
void Frame() {

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

//Code to handle typing 
void Typeinput (char input[50], float total) {

	//for getline to work, need ignore &  clear
	cin.ignore();
	cin.clear();
	cin.getline(input, total);
	cout << "\n: " << input << endl; 
}

//Code for accuracy checker 	
void Errorcount (char input[50], char SentOutput [], float total, int& error_count) {
	//Comparing what user type and sentence 
	for (int i = 0; i < total; i++){
		if (input[i] != SentOutput[i]) {
		error_count++;
		}
	}
	cout << "No. of mistakes" << error_count << endl;
}

//Code for accuracy calculator 
void Accuracy (float& acc, float total, int error_count) {
	acc = ((total - error_count) / total) * 100;
	cout << "Accuracy: " << acc; 
} 
