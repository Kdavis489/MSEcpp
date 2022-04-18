#pragma once

#include <ctime>
#include "functions.h"
#include "Character.h"
#include<vector>

class Game
{
public:
	Game();
	virtual ~Game();

	//operators
	
	//functions
	void initGame();
	void mainMenu();

	//accessors
	inline bool getPlaying() { return playing; }


	//modifiers
private:
	//variables
	int choice;
	bool playing;

	//Character related
	int activeCharacter;
	std::vector<Character> character;
	std::string fileName;
};

