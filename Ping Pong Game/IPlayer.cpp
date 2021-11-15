#include <iostream>
#include <stdexcept>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "IPlayer.h"
#include "PlayerA.h"
#include "PlayerB.h"
using namespace std;


bool IPlayer::operator>(const IPlayer& other){
    if (points > other.points)
        return true;
    else return false;
}

IPlayer::IPlayer(std::string name)
{
    this->name = name;
}

IPlayer::IPlayer(){}

IPlayer::~IPlayer(){}

int IPlayer::getPoints()
{
    return points;
}

int IPlayer::getAttack()
{
    return attackPoints;
}

int IPlayer::getDefense()
{
    return defensePoints;
}

std::string IPlayer::getName()
{
    return name;
}

void IPlayer::rest()
{
    //Resets the stamina and attackBonus values after each round
    stamina = 100;
    attackBonus = 0;
}
