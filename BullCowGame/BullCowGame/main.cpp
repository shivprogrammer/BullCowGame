#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame;

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

void PlayGame() {
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	constexpr int GUESSES_REMAINING = 5;
	for (int count = 1; count <= MaxTries; count++) {
		GetGuess();
		std::cout << std::endl;
	}
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