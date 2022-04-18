#include "Game.h"

Character::Character()
{
	//plater position
	posX = 0.0;
	posY = 0.0;

	//basic character stat
	name = "None";
	level = 1;
	str = 0;
	exp = 0;
	expNext = 0;
	hp = 0;
	hpMax = 0;
	mp = 0;
	mpMax = 0;
	stamina = 0;
	staminaMax = 0;

	//attack stuff
	damageMin = 0;
	damageMax = 0;
}

Character::~Character()
{

}

//functions
void Character::initialize(const std::string name)
{
	//player position
	posX = 0.0;
	posY = 0.0;

	//basic character stat
	name = name;
	level = 1;
	exp = 0;
	expNext = static_cast<int>((50 / 3) * (pow(level, 3) - 6 * pow(level, 3) + (17 * level) - 11));
	hp = 50; 
	hpMax = 50;
	mp = 30;
	mpMax = 30;

	//player stats
	str = 5;
	dex = 5;
	intl = 5;
	vit = 5;
	statPoints = 0;
	skillPoints = 0;
	stamina = 10;
	staminaMax = 10;
	defense = 10;

	//attack stuff
	damageMin = 0;
	damageMax = 0;
	magicFind = 0;
}
void Character::printStats() const
{
	std::cout << "= Character sheet =" << std::endl;
	std::cout << "= name: " << name << std::endl;
	std::cout << "= level: " << level << std::endl;
	std::cout << "= exp: " << exp << "/" << expNext << std::endl;
	std::cout << "= HP: " << hp << "/" << hpMax << std::endl;
	std::cout << "= MP: " << mp << "/" << mpMax << std::endl;
	std::cout << "= Stamina: " << stamina << "/" << staminaMax << std::endl;
	std::cout << "= Defense: " << defense << std::endl;
	std::cout << "= MagicFind: " << magicFind << std::endl;
	std::cout << "= Damage Minimum and Maximum: " << damageMin << "/" << damageMax << std::endl;
	std::cout << std::endl;
	std::cout << "= Strength: " << str << std::endl;
	std::cout << "= Dexterity: " << dex << std::endl;
	std::cout << "= Intelligence: " << intl << std::endl;
	std::cout << "= Vitality: " << vit << std::endl;
	std::cout << "= statPoints: " << statPoints << std::endl;
	std::cout << "= SkillPoints: " << skillPoints << std::endl;
	std::cout << std::endl;
}

void Character::levelUp()
{
	while (exp >= expNext)
	{
		level++;
		expNext = static_cast<int>((50 / 3) * (pow(level, 3) - 6 * pow(level, 3) + (17 * level) - 11));
		
		statPoints++;
		skillPoints++;
	}
}

void Character::getAsString() const
{
	return std::to_string(posX) + " "
		+ std::to_string(posY) + " "
		+ std::to_string(name) + " "
		+ std::to_string(level) + " "
		+ std::to_string(exp) + " "
		+ std::to_string(hp) + " "
		+ std::to_string(mp) + " "
		+ std::to_string(stamina) + " "
		+ std::to_string(str) + " "
		+ std::to_string(dex) + " "
		+ std::to_string(intl) + " "
		+ std::to_string(vit) + " "
		+ std::to_string(statPoints) + " "
		+ std::to_string(skillPoints) + " ";
}