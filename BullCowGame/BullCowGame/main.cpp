#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();

// the entry point for our application
int main() {
	PrintIntro();

	GetGuess();

	cout << endl;
	return 0;
}

void PrintIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuess() {
	// get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	// repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;

	// get a guess from the player
	cout << "Enter your guess: ";
	getline(cin, Guess);
	// repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;
	
	return Guess;
}