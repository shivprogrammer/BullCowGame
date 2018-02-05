#include "FBullCowGame.h"
#include <string>

using int32 = int;
using FSTring = std::string;

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int32 FBullCowGame::GetHiddenWordLength() const { return MyHiddenWord.length(); }

void FBullCowGame::Reset() {
	constexpr int32 MAX_TRIES = 8;
	const FString HIDDEN_WORD = "planet";

	MyMaxTries = MAX_TRIES;
	MyHiddenWord = HIDDEN_WORD;
	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::IsGameWon() const {
	return false;
}

EGuessStatus FBullCowGame::CheckGuessValidity(FString Guess) const {
	if (false) {
		return EGuessStatus::Not_Isogram;
	}
	else if (false) {
		return EGuessStatus::Not_Lowercase;
	}
	else if (Guess.length() != GetHiddenWordLength()) {
		return EGuessStatus::Wrong_Length;
	}
	else {
		return EGuessStatus::OK;
	}
}

// receives a VALID guess, increments turn, return count
FBullCowCount FBullCowGame::SubmitValidGuess(FString Guess)
{
	// increment turn number
	MyCurrentTry++;
	// setup return variable
	FBullCowCount BullCowCount;

	int32 HiddenWordLength = MyHiddenWord.length();
	for (int32 i = 0; i < HiddenWordLength; i++) {
		for (int32 j = 0; j < HiddenWordLength; j++) {
			if (MyHiddenWord[i] == Guess[j]) {
				if (i == j) {
					BullCowCount.Bulls++;
				}
				else {
					BullCowCount.Cows++;
				}
			}
		}
	}

	return BullCowCount;
}
