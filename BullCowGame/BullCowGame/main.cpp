#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string Guess = "";
string GetGuess();
void RelayGuess();

// the entry point for our application
int main() {
	PrintIntro();
	PlayGame();
	return 0;
}

void PlayGame() {
	constexpr int GUESSES_REMAINING = 5;
	for (int count = GUESSES_REMAINING; count > 0; count--) {
		GetGuess();
		cout << endl;
	}
}

// introduce the game
void PrintIntro() {
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
	getline(cin, Guess);

	RelayGuess();
	return Guess;
}

void RelayGuess() {
	// print the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return;
}