#pragma once
#include <iostream>
#include <list>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
#include <cstring>
#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer() {

}
void ComputerPlayer::setNovci() {
	srand(time(NULL));
	int random = rand() % (8 + 1);
	while (random == 4) {
		random = rand() % (8 + 1);
	}
	setRuka(random);
}
ComputerPlayer::ComputerPlayer(string i) {
	setIme(i);
	setNovci();
}

int ComputerPlayer::randomPogodak() {

	srand(time(NULL));
	int random = rand() % (8 + 1);

	while (random == 4) {
		random = rand() % (8 + 1);
	}
	return random;
}
