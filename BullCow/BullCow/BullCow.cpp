//a hash # is a pre-processor directive. Library code in <>.
//Tutorial is a courtesy of Ben Tristem, Udemy.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//introduce the game
	constexpr int WORD_LENGTH = 5;
	string iso = "carol";
	cout << "Welcome to The Bulls and Cows Game\n";
	cout << "Try finding the"<< WORD_LENGTH <<"-letter isogram I'm thinking of!";
	//Get guess from player and repeat it 
	string guess;
	bool found = false;
	int ctr = 0;
	int bull = 0;
	int cow = 0;
	do {
		cout << "Enter your guess:\n";
		getline(cin, guess);
		ctr++;
		cout << "Your guess was: " << guess;
		for (int i = 0; i < iso.length(); i++) {
			if (guess.at(i) == iso.at(i))
				bull++;
			else if (guess.find(iso.at(0)) != -1)
				cow++;
		}
		cout << "Bulls " << bull << " Cows " << cow;
	} while ((ctr<10)||(!found));
	if (found)
		cout << "You won!";
	else
		cout << "You lost! The isogram was" << iso;
	return 0;

}
