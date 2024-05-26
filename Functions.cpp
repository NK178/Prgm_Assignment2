//Code for all the functions 

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
