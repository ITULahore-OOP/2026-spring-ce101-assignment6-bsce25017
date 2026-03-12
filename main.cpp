#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include "Guild.h"
#include <iostream>
using namespace std;

int main()
{
int choice;
 do
{
cout<<"\n<<<Menu>>>"<<endl;
cout<<"enter 1 when u want hero info"<<endl;
cout<<"enter 2 when u want to have the hero comparison"<<endl;
cout<<"enter 3 when u want  warrior info"<<endl;
 cout<<"enter 4 when u want knight info"<<endl;
cout<<"enter 5 when u want the magical entity info"<<endl;
cout<<"enter 6 when u want spellblade info"<<endl;
cout<<"enter 7 when u want guild output"<<endl;
cout<<"enter 8 when u want to have guild stats"<<endl;
cout<<"enter 9 when u want to take damage"<<endl;
cout<<"enter 60 when u want to exit"<<endl;
 cout<<"Enter choice: ";
cin>>choice;

if(choice==1)
{
string firstHeroName;
int firstHeroHealth;
int firstHeroPower;
 cout<<"Enter the hero name:";
cin>>firstHeroName;
cout<<"Enter hero health:";
cin>>firstHeroHealth;
cout<<"Enter hero power:";
cin>>firstHeroPower;
 Hero firstHero(firstHeroName,firstHeroHealth,firstHeroPower);
cout<<"<<<Hero Info>>>"<<endl;
cout<<"Name:"<<firstHero.getName()<<endl;
cout<<"Health:"<<firstHero.getHealth()<<endl;
cout<<"Power:"<<firstHero.getPower()<<endl;
}
else if(choice==2)
{
string firstHeroName;
int firstHeroHealth;
int firstHeroPower;
cout<<"Enter first hero name: ";
 cin>>firstHeroName;
cout<<"Enter first hero health:";
cin>>firstHeroHealth;
cout<<"Enter first hero power: ";
cin>>firstHeroPower;
Hero firstHero(firstHeroName,firstHeroHealth,firstHeroPower);
string secondHeroName;
int secondHeroHealth;
int secondHeroPower;
cout<<"Enter second hero name: ";
cin>>secondHeroName;
cout<<"Enter second hero health: ";
cin>>secondHeroHealth;
cout<<"Enter second hero power: ";
cin>>secondHeroPower;
Hero secondHero(secondHeroName,secondHeroHealth,secondHeroPower);
cout<<"Now its hero camparison"<<endl;
if(secondHero>firstHero)//condition for first and second hero
cout<<secondHero.getName()<<" is stronger than "<<firstHero.getName()<<endl;
else
cout<<firstHero.getName()<<" is stronger than "<<secondHero.getName()<<endl;
cout<<"Combined vitality: "<<(firstHero+secondHero)<<endl;
}

else if(choice==3)
 {
string warriorName;
int warriorHealth;
int warriorPower;
int warriorArmor;
cout<<"Enter warrior name: ";
cin>>warriorName;
cout<<"Enter warrior health: ";
cin>>warriorHealth;
cout<<"Enter warrior power: ";
cin>>warriorPower;
cout<<"Enter warrior armor: ";
cin>>warriorArmor;
Warrior warrior(warriorName,warriorHealth,warriorPower,warriorArmor);
 cout<<"Warrior info: "<<endl;//
cout<<"Name is: "<<warrior.getName()<<endl;
cout<<"Effective health: "<<warrior.calculateEffectiveHealth()<<endl;
}

else if(choice==4)
{
string knightName;
int knightHealth;
int knightPower;
int knightArmor;
int knightCharge;
cout<<"Enter knight name: ";
cin>>knightName;
cout<<"Enter knight health: ";
cin>>knightHealth;
cout<<"Enter knight power: ";
cin>>knightPower;
cout<<"Enter knight armor: ";
cin>>knightArmor;
cout<<"Enter knight charge bonus: ";
cin>>knightCharge;
Knight knight(knightName,knightHealth,knightPower,knightArmor,knightCharge);
cout<<"\nKnight info :"<<endl;
cout<<"Name: " <<knight.getName()<<endl;
cout<<"Burst Damage: " << knight.calculateBurstDamage() << endl;
}
else if(choice==5)
{
int magicalEntityMana;
int magicalEntitySpell;
cout<<"Enter magical entity mana: ";
cin>>magicalEntityMana;
cout<<"Enter magical entity spell power: ";
cin>>magicalEntitySpell;
MagicalEntity magicalEntity(magicalEntityMana,magicalEntitySpell);
cout<<"\nMagical Entity info:" << endl;
cout<<"the mana: "<<magicalEntity.getMana()<<endl;
cout<<"Spell Power: "<< magicalEntity.getSpellPower()<<endl;
}
else if(choice==6)
{
string spellbladeName;
int spellbladeHealth;
int spellbladePower;
int spellbladeArmor;
int spellbladeMana;
int spellbladeSpell;
cout<<"Enter spellblade name: ";
 cin>>spellbladeName;
cout<<"Enter spellblade health: ";
cin>>spellbladeHealth;
cout<<"Enter spellblade power: ";
cin>>spellbladePower;
 cout<<"Enter spellblade armor: ";
cin>>spellbladeArmor;
cout<<"Enter spellblade mana: ";
cin>>spellbladeMana;
cout<<"Enter spellblade spell power: ";
cin>>spellbladeSpell;
Spellblade spellblade(spellbladeName,spellbladeHealth,spellbladePower,spellbladeArmor,spellbladeMana,spellbladeSpell);
cout<<"Spellblade info: "<<endl;
cout<<"Name: " << spellblade.getName()<<endl;
cout<<"Hybrid damage: "<<spellblade.calculateHybridDamage()<<endl;
}

else if(choice==7)
{
 string guildName;
cout<<"Enter guild name: ";
cin>>guildName;
string heroName;
int heroHealth;
int heroPower;
cout<<"Enter a hero name:";
cin>>heroName;
cout<<"Enter hero health: ";
cin>>heroHealth;
cout<<"Enter hero power: ";
cin>>heroPower;
Hero guildHero(heroName,heroHealth,heroPower);
Guild guild(guildName);
guild+=&guildHero;
cout<<"<<<Guild Output>>>"<<endl;

cout<<guild;
}

else if(choice == 8)
{
string guildName;
cout<<"Enter guild name: ";
cin>>guildName;
string heroName;
int heroHealth;
int heroPower;
cout<<"Enter hero name for guild: ";
cin>>heroName;
cout<<"Enter hero health: ";
cin>>heroHealth;
cout<<"Enter hero power: ";
cin>>heroPower;
Hero guildHero(heroName,heroHealth,heroPower);
Guild guild(guildName);
 guild+=&guildHero;
cout<<"\n<<<Guild Stats>>>"<<endl;
guild.displayGuildStats();
}

else if(choice==9)
{
string heroName;
int heroHealth;
int heroPower;
cout<<"Enter hero name: ";
cin>>heroName;
cout<<"Enter hero health: ";
cin>>heroHealth;
 cout<<"Enter hero power: ";
cin>>heroPower;
Hero firstHero(heroName,heroHealth,heroPower);
int damageAmount;
cout<<"Enter damage amount: ";
cin>>damageAmount;
cout<<"<<<Take Damage>>>"<<endl;
cout<<heroName<<" health before: "<<firstHero.getHealth()<<endl;
 firstHero.takeDamage(damageAmount);
cout<<"After "<<damageAmount<<" the damage "<<heroName<<" health is= "<<firstHero.getHealth()<<endl;
firstHero.takeDamage(99999);//if the health is less than this damage,it will make health 0,

cout<<"After 99999 damage "<<heroName<<" health is= "<<firstHero.getHealth() << endl;
}

else if(choice==60)
{
cout<<"exiting it"<<endl;
break;
}
else
{
cout<<"its an invalid choice"<<endl;
 }
}
while(true);
return 0;
}