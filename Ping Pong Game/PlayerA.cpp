#include <iostream>
#include <stdexcept>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "IPlayer.h"
#include "PlayerA.h"
#include "PlayerB.h"
using namespace std;

PlayerA::PlayerA(string n)
{
    name = n;
    attackBonus = 0;
    attackPoints = 30;
    defensePoints = 70;
    points = 0;
    stamina = 100;
}

bool PlayerA::attack(IPlayer* other)
{
    attackBonus = rand() % 100;
    if ((attackBonus > 50) && (stamina - 5 >= 0)) stamina = stamina - 5;
        else if (attackBonus > 50) stamina = 0;
    int sum = attackBonus + attackPoints;
    int tmpAttackValue = sum * other->beAttacked();
    if (sum > getDefense()) tmpAttackValue = tmpAttackValue + 10;
    if (tmpAttackValue > getDefense()){
        points = points + 1;
        return true;
    }
    else return false;
}

double PlayerA::beAttacked(){
    if (stamina > 0) stamina = stamina - 1;
    int a = rand() % 50;
    if (stamina + a > 50) return 0;
        else return 2;
}
