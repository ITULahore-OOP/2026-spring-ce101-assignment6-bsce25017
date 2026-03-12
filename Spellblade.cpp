#include "Spellblade.h"
#include <iostream>
using namespace std;

Spellblade::Spellblade(string name,int hp,int power,int armor,int mana,int spell): Warrior(name,hp,power,armor),MagicalEntity(mana,spell)
{
}
Spellblade::~Spellblade(){
}
int Spellblade::calculateHybridDamage() const
{return getPower() + getSpellPower();
}