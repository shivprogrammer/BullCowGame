#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiating a new game

// the entry point for our application
int main() {

	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	}
	while (bPlayAgain);

	return 0;
}

// introduce the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

void PlayGame() {
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();

	//TODO change from FOR to WHILE loop
	for (int count = 1; count <= MaxTries; count++) {
		GetGuess(); // TODO make loop checking valid

		// submit valid guess to the game
		// print number of bulls and cows

		std::cout << std::endl;
	}

	// TODO add a game summary
}

std::string GetGuess() {
	int CurrentTry = BCGame.GetCurrentTry();

	// get guess from player
	std::string Guess = "";
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);
	std::cout << "Your guess was: " << Guess << std::endl;


	return Guess;
}

bool AskToPlayAgain() {
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');
}