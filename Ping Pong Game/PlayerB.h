#ifndef PLAYERB_H
#define PLAYERB_H

#include "IPlayer.h"


class PlayerB : public IPlayer
{
    public:
        PlayerB(string name);
        bool confused;
        bool attack(IPlayer* other);
        double beAttacked();

    protected:

    private:
};

#endif // PLAYERB_H
