#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string name,int hp,int power,int armor):Hero(name,hp,power)
{
 this->armorRating=armor;
}
Warrior::~Warrior()
{
}
int Warrior::getArmor()const
{return armorRating;}

int Warrior::calculateEffectiveHealth()const
{return getHealth() + (armorRating * 2);
}