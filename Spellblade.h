#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "Warrior.h"
#include "MagicalEntity.h"

class Spellblade : public Warrior,public MagicalEntity
{
 public:
Spellblade(string name,int hp,int power,int armor,int mana,int spell);
 ~Spellblade();
int calculateHybridDamage() const;
};
#endif