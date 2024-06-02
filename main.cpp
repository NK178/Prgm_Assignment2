#include "Include.h"
#include "Functions.h"


int main()
{

	//Condition to end program
	bool loop = true;

	while (loop == true) {
		////////////////////////////////////////////////////////////////////////////

		//Defining variables to use 
		////// Array to store sentence to display /////
		//Sentence 1 //44 chars
		char Sentence1[44] = "The quick brown fox jumps over the lazy dog";
		//Sentence 2 //40 chars	
		char Sentence2[40] = "Pack my box with five dozen liquor jugs";
		//Sentence 3 //55 chars
		char Sentence3[55] = "Everyone has a plan until they get punched in the face";
		//Sentence 4 //54
		char Sentence4[54] = "The greatest victory is that which requires no battle";
		//Sentence 5 //49
		char Sentence5[49] = "In the midst of chaos, there is also opportunity";

		//To store sentence chosen
		char SentenceFin[55];

		//To store final sentence 
		//Array to store user input
		char input[55];

		//to show total words in the sentence based on sentence choosen
		float total = 0.0f;

		//to show number of characters wrong
		int error_count = 0;

		//Condition for loop
		bool condition = false;

		//To store user key input 
		int c = 0;

		//To track arrow position 
		int Arrowpos = 0;

		//To store user's typing accuracy 
		float acc = 0.0f;

		//To store start and stop time of typing
		clock_t start, stop;

		//To store final time taken for typing
		double finTime = 0.0f;

		//To store words per minute 
		int WordsPM = 0;
		
		//To store total time taken 
		float Totaltime = 0;

		//To check whether user wants to save score 
		bool Savescore = false;

		/////////////////////////////////////////////////////////////////////////////

		//UI building
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

		/////////////////////////////////////////////////////////////////////////////////

		//Code for menu inputs 
		while (condition != true) {

			switch (c = _getch()) {

			//case KEY_UP:

			//	cout << endl << "Up" << endl;//key up
			//	break;

			case KEY_DOWN:
				Clear();
				Arrow(37, 18);
				Arrowpos = 3;
				break;

			case KEY_LEFT:
				Clear();
				Arrow(2, 8);
				Arrowpos = 1;
				break;

			case KEY_RIGHT:
				Clear();
				Arrow(52, 8);
				Arrowpos = 2;
				break;

			case ENTER:
				if (Arrowpos == 3) {
					ConsoleClear();
					condition = true;
				}
				else if (Arrowpos == 1) {
					ConsoleClear();
					condition = true;
				}
				else if (Arrowpos == 2) {
					ConsoleClear();
					condition = true;
				}

				break;

			}
		}
		

		////////////////////////////////////////////////////////////////////////////////
		//if QUIT was chosen
		if (Arrowpos == 3) {
			gotoxy(40, 15);
			cout << "Bye";
			gotoxy(3, 25);
			loop = false;
		}

		////Rebuildig frame
		//if (Arrowpos == 1 || Arrowpos == 2) {
		//	gotoxy(0, 0);
		//	Frame();
		//}

		//if TYPE was chosen
		while (Arrowpos == 1) {

			gotoxy(0, 0);
			Frame();
			//Line for the sentence to appear on
			Textbox();

			//randomizer
			// Providing a seed value for randomizer so value can be different
			srand((unsigned)time(NULL));

			// Offset = 1
			// Range = 5
			int random = 1 + (rand() % 5);

			switch (random) {

			case 1: 
				total = 44;
				Text(Sentence1,total);
				for (int i = 0; i < 55; i++) {
					SentenceFin[i] = Sentence1[i];
				}
				break;

			case 2:
				total = 40;
				Text(Sentence2, total);
				for (int i = 0; i < 55; i++) {
					SentenceFin[i] = Sentence2[i];
				}
				break;

			case 3:
				total = 55;
				Text(Sentence3, total);
				for (int i = 0; i < 55; i++) {
					SentenceFin[i] = Sentence3[i];
				}
				break;

			case 4:
				total = 54;
				Text(Sentence4, total);
				for (int i = 0; i < 55; i++) {
					SentenceFin[i] = Sentence4[i];
				}
				break;

			case 5:
				total = 49;
				Text(Sentence5, total);
				for (int i = 0; i < 55; i++) {
					SentenceFin[i] = Sentence5[i];
				}
				break;
			}

			//Store sentence being outputed


			//Countdown from 3 before user can type
			Countdown();
			
			//Track time taken
			start = clock();

			//put cursor at start
			gotoxy(13, 15);

			//Store user 
			cin.getline(input, total);

			//Stop time
			stop = clock();

			//Calculate time taken 
			Totaltime = (stop - start) / (double)CLOCKS_PER_SEC;

			////Calcuate Words per minute
			WordsPM = (total / 5/ Totaltime) * 60;
			gotoxy(13, 21);
			cout << "WPM: " << WordsPM;

			//Calculate error
			Errorcount(input, SentenceFin, total, error_count);

			//Calculate accuracy
			Accuracy(acc, total, error_count);

			//Ask user if they want to retry or return to menu
			Retry(Arrowpos, Savescore);

			//Reset values
			if (Savescore == false) {
				ResetValues(total, error_count, acc, WordsPM,Savescore);
				//clear sentence
				for (int i = 0; i < 55; i++) {
					SentenceFin[i] == ' ';
				}
			}


		}


		//if user choose LEADERBOARD or Savescore == true
		if (Arrowpos == 2 || Savescore == true) {

		}
			














	}
	return 0;

}


