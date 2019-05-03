//a hash # is a pre-processor directive. Library code in <>.
//Tutorial is a courtesy of Ben Tristem, Udemy.
#include <iostream>
//#include <string> This seems to be outdated.
using namespace std;

int main()
{
	//introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to The Bulls and Cows Game\n";
	cout << "Try finding the"<< WORD_LENGTH <<"-letter isogram I'm thinking of! Enter it now: \n";
	//Get guess from player and repeat it 
	string guess;
	cin >> guess;
	cout << "Your guess was: " << guess;
}
