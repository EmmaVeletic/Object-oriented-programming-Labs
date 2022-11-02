#include <iostream>
#include <list>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
#include <cstring>
#pragma once
#include "Player.h"

Player::Player() {
}

Player::Player(string i, int r) {
	ime = i;
	ruka = r;
}
string Player::getIme() {
	return ime;
}
void Player::setIme(string i) {
	ime = i;
}
int Player::getRuka() {
	return ruka;
}
void Player::setRuka(int r) {
	ruka = r;
}
int Player::getBodovi() {
	return bodovi;
}
void Player::setBodovi(int b) {
	bodovi = b;
}
void Player::povecajBodove() {
	bodovi += 1;
}
void Player::toString() {
	cout << ime << " ima " << ruka << " kuna u ruci, i trenutno ima " << bodovi << " bodova." << endl;
}
