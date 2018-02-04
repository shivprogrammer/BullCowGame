#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset() {
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::IsGameWon() const {
	return false;
}

bool FBullCowGame::CheckGuessValidity(FString) {
	return false;
}

// receives a VALID guess, increments turn, return count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	// increment turn number
	// setup return variable
	// loop through all letters in guess
		// compare letters against secret word

	return BullCowCount();
}
