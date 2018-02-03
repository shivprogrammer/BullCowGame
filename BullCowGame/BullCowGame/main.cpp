#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string Guess = "";
std::string GetGuess();
void RelayGuess();
bool AskToPlayAgain();

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
	constexpr int GUESSES_REMAINING = 5;
	for (int count = GUESSES_REMAINING; count > 0; count--) {
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
	// get guess from player
	std::cout << "Enter your guess: ";
	std::getline(std::cin, Guess);

	RelayGuess();
	return Guess;
}

void RelayGuess() {
	// print guess to player
	std::cout << "Your guess was: " << Guess << std::endl;
	return;
}

bool AskToPlayAgain() {
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');
}