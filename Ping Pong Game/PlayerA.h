#ifndef PLAYERA_H
#define PLAYERA_H

#include "IPlayer.h"


class PlayerA : public IPlayer
{
    public:
        PlayerA(string name);
        bool attack(IPlayer* other);
        double beAttacked();

    protected:

    private:
};

#endif // PLAYERA_H
