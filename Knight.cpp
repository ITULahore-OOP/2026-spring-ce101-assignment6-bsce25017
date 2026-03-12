#include "Knight.h"
#include <iostream>
using namespace std;

 Knight::Knight(string name,int hp,int power,int armor,int charge): Warrior(name,hp,power,armor)
{
this->chargeBonus = charge;
}
 Knight::~Knight()
{
}
 int Knight::getChargeBonus() const
{return chargeBonus;}
 int Knight::calculateBurstDamage() const
{return getPower() + chargeBonus;
}