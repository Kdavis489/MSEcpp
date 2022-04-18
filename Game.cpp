#include "Game.h"

Game::Game()
{
	choice = 0;
	playing = true;
	activeCharacter = 0;
	filename = "characters.txt";
}

Game::~Game()
{

}
void Game::initGame()
{
	std::string name;
	std::cout << "Enter Character Name:" << std::endl;;
	std::getline(cin, name);

	character.initialize(name);
}

void Game::mainMenu()
{
	cout << "MAIN MENU" << endl << endl;

	cout << "0: quit" << endl;
	cout << "1: Travel" << endl;
	cout << "2: shop" << endl;
	std::cout << "3: level up" << endl;
	std::cout << "4: rest" << endl;
	std::cout << "5: Character sheet" << endl;
	std::cout << "6: New Character" << endl;
	std::cout << "7: Save Character" << endl;
	std::cout << "8: Load Character" << endl;
	std::cout << std::endl;

	std::cout << "choice: " << endl;
	std::cin >> choice;
	std::cout << std::endl;
	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 5:
		character.printStats();
		break;
	case 6:

		break;
	case 7:

		break;
	default:
		break;
	}
}