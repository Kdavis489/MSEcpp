#pragma once
#include "Inventory.h"

class Character
{
public:
	Character();
	virtual ~Character();

	//functions
	void initialize(std::string name);
	void printStats() const;
	void levelUp();
	std::string getAsString()const;


	//accessors
	//char position
	inline const double& getPosX() const { return posX; };
	inline const double& getPosY() const { return posY; };
	//new character stuff
	inline const std::string& getName() const { return name; };
	inline const int& getLevel() const { return level; };
	inline const int& getStamina() const { return stamina; };
	inline const int& getStaminaMax() const { return staminaMax; };
	inline const int& getEXP() const { return exp; };
	inline const int& getExpNext() const { return expNext; };
	inline const int& getHP() const { return hp; };
	inline const int& getHPMax() const { return hpMax; };
	inline const int& getDefense() const { return defense; };
	//attack stuff
	inline const int& getDamageMin() const { return damageMin; };
	inline const int& getDamageMax() const { return damageMax; };

	//character stats
	inline const int& getSTR() const { return str; };
	inline const int& getDEX() const { return dex; };
	inline const int& GetINTL() const { return intl; };
	inline const int& getVIT() const { return vit; };
	inline const int& getMagicFind() const { return magicFind; };

	//modifiers

private:
	//character positions
	double posX;
	double posY;

	//basic character stat
	std::string name;
	int level;
	int stamina;
	int staminaMax;
	int defense;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int mp;
	int mpMax;
	//player stats
	int str;
	int dex;
	int intl;
	int vit;
	int statPoints;
	int skillPoints;

	//attack stuff
	int damageMin;
	int damageMax;
	int magicFind;
};
