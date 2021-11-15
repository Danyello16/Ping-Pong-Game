#include <iostream>
#include <stdexcept>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "IPlayer.h"
#include "PlayerA.h"
#include "PlayerB.h"
using namespace std;

PlayerB::PlayerB(string n)
{
    name = n;
    attackBonus = 0;
    attackPoints = 45;
    defensePoints = 55;
    confused = false;
    points = 0;
    stamina = 100;
}

bool PlayerB::attack(IPlayer* other)
{
    if (confused) confused = false;
        else confused = true;
    if (!confused) attackBonus = attackBonus + other->beAttacked() * 2;
    int tmpAttackValue = attackBonus + attackPoints;
    if (tmpAttackValue > getDefense()){
        points = points + 1;
        return true;
    }
    else return false;

}






double PlayerB::beAttacked(){
    if (confused) stamina = stamina - stamina / 5;
        else stamina = stamina - stamina / 20;
    if (stamina > 30) return 0;
        else return 1;
}
