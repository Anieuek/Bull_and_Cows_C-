#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
void Playgame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; //instantiate a new game

//the entry point for my application
int main()
{
	bool bWantsToPlayAgain = false;
	do {
		PrintIntro();
		Playgame();
		bWantsToPlayAgain = AskToPlayAgain();
	} 
	while (bWantsToPlayAgain);

	return 0; //exit the application
}

void Playgame()
{
	
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	// loop for the number of turns asking for guesses
	for (int count = 1; count <= MaxTries; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess was " << Guess << std::endl;
		std::cout << std::endl;
	}
}

// introduce the game
void PrintIntro() 
{
	constexpr int WORLD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game\n";
	std::cout << "Can you guess the " << WORLD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

std::string GetGuess() 
{
	int CurrentTry = BCGame.GetCurrentTry();
	
	// get a guess from the player
	std::cout << "Try" << CurrentTry << ". Enter your guess: ";
	std::string Guess = "";
	FBullCowGame BCGame;
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
