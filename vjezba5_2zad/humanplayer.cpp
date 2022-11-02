#include <iostream>
#include <list>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
#include <cstring>
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer() {

}

void HumanPlayer::setNovci(int novci) {
	if (novci > 8 || novci == 4) {
		cout << "Ne moze bit toliko kuna u ruci" << endl;
	}
	else {
		setRuka(novci);
	}
}

HumanPlayer::HumanPlayer(string i, int n) {
	setIme(i);
	setNovci(n);
}
