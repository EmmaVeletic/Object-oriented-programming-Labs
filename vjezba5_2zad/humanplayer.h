#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "Player.h"
using namespace std;

class HumanPlayer : public Player {
public:
	HumanPlayer();

	void setNovci(int novci);

	HumanPlayer(string i, int n);
};
#endif
