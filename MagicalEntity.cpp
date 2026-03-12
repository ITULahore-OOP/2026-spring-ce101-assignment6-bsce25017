#include "MagicalEntity.h"
#include <iostream>
using namespace std;

MagicalEntity::MagicalEntity(int mana,int spell)
{
 this->manaPool = mana;
this->spellPower = spell;
}
MagicalEntity::~MagicalEntity()
 {
}
int MagicalEntity::getMana() const
{return manaPool;
}
int MagicalEntity::getSpellPower() const
{return spellPower;
}