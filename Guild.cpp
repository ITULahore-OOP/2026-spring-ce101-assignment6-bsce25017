#include "Guild.h"
#include <iostream>
using namespace std;

Guild::Guild(string name)
{
this->guildName = name;
this->memberCount = 0;
}

 Guild::~Guild()
{
cout<<"The guild "<<guildName<<" has been disbanded!"<<endl;
}

int Guild::calculateTotalGuildPower() const{
int total=0;
for(int i=0;i<memberCount;i++)
 {
total=total+roster[i]->getPower();}
return total;
}
void Guild::displayGuildStats() const
{
cout << "Guild Name: " << guildName << endl;
cout << "Total Members: " << memberCount << "/15" << endl;
cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

void Guild::operator+=(Hero* newHero)
{
if(memberCount < 15)
{
roster[memberCount] = newHero;
memberCount = memberCount + 1;
}
else
{
cout << "Guild is at full capacity!" << endl;
}
}

ostream& operator<<(ostream& os, const Guild& g)
{
os<< "Guild: "<< g.guildName << endl;
os<< "Members: " << g.memberCount << endl;
for(int i = 0; i < g.memberCount; i++)
{
os<< "- "<<g.roster[i]->getName()<<" (Power: "<<g.roster[i]->getPower()<< ")"<<endl;
}//os is used in operator<<, because there is operator overloading
return os;
}