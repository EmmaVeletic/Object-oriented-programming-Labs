#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include "Player.h"
using namespace std;

class ComputerPlayer : public Player {

    public:
        ComputerPlayer();
        void setNovci();
        ComputerPlayer(string i);
        int randomPogodak();
};
#endif

