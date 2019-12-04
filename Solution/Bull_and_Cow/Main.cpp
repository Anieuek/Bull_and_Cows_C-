#include <iostream>
#include <string>


void PrintIntro();
std::string GetGuessAndPrintBack();

//the entry point for my application
int main()
{
	PrintIntro();

	GetGuessAndPrintBack();
	GetGuessAndPrintBack();
	
	std::cout << std::endl;
	return 0;
}

// introduce the game
void PrintIntro() {
	constexpr int WORLD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game\n";
	std::cout << "Can you guess the " << WORLD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}
// get a guess from the player
std::string GetGuessAndPrintBack() {
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	
	// print the guess back
	std::cout << "Your guess was " << Guess << std::endl;
	return Guess;
}