#include <iostream>
#include <list>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
#include <cstring>
#pragma once
#include "Game.h"
#include "Player.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"

Game::Game() {

}
void Game::addPlayer(Player p) {

	players.push_back(p);

}

void Game::printajSveIgrace() {

	for (int i = 0; i < players.size(); i++) {
		players[i].toString();
	}

}
void Game::prebrojiSveKune() {

	for (int i = 0; i < players.size(); i++) {
		sveKune += players[i].getRuka();
	}
}

int Game::prepoznajPobjednika() {

	for (int i = 0; i < players.size(); i++) {
		if (players[i].getBodovi() == doKolikoSeIgra) {
			return 1;
		}
	}
	return 0;
}

void Game::smanjiKod(int* broj, int dksi, int i) {
	for (int j = 0; j < players.size(); j++) {
		if (players[j].getBodovi() == dksi) {
			cout << players[i].getIme() << " je pobjedio!!!" << endl;
			*broj = 1;
			break;
		}
		if (players[j].getIme().find("computer_") != std::string::npos) {
			srand(time(NULL));
			int random = rand() % (8 + 1);
			while (random == 4) {
				random = rand() % (8 + 1);
			}
			players[j].setRuka(random);
		}
		else {
			int odabir2;
			cout << players[j].getIme() << " unesite koliko kuna ce igrac imati u ruci.";
			cin >> odabir2;
			while (odabir2 == 4 || odabir2 > 8) {
				cout << "Ne mozete staviti toliko kuna u vasu ruku! Pokusajte ponovno." << endl;
				cout << players[j].getIme() << " unesite koliko kuna ce igrac imati u ruci.";
				cin >> odabir2;
			}
			players[j].setRuka(odabir2);
		}
	}
}

// bi je brojIgraca a dksi je doKolikoSeIgra
Game::Game(int bi, int dksi) {
	brojIgraca = bi;
	doKolikoSeIgra = dksi;
	string name;
	int hand;
	string tipIgraca;
	int c = 1;

	for (int i = 0; i < bi; i++) {
		cout << "Jeli igrac covjek (hum) ili kompjuter (comp)?" << endl;
		cin >> tipIgraca;
		if (tipIgraca == "comp") {
			ComputerPlayer cp("computer_" + to_string(c));
			addPlayer(cp);
			c += 1;
		}
		else {
			cout << "Unesite ime igraca." << endl;
			cin >> name;
			cout << "Unesite koliko kuna ce te imati u ruci.";
			cin >> hand;
			while (hand == 4 || hand > 8) {
				cout << "Ne moze biti toliko kuna u ruci. Pokusajte ponovno." << endl;
				cin >> hand;
			}
			HumanPlayer hp(name, hand);
			addPlayer(hp);
		}
	}

	prebrojiSveKune();

	int i = 0;
	int broj = 0;
	cout << endl;
	while (broj != 1) {
		// to ako je igrac kompjuter
		if (players[i].getIme().find("computer_") != std::string::npos) {
			cout << "Red je na " << players[i].getIme() << "." << endl;
			srand(time(NULL));
			int random = rand() % ((((brojIgraca - 1) * (8 + 1)) + players[i].getRuka()) - players[i].getRuka()) + players[i].getRuka() - 1;
			while (random == 4) {
				random = rand() % ((((brojIgraca - 1) * (8 + 1)) + players[i].getRuka()) - players[i].getRuka()) + players[i].getRuka() - 1;
			}
			cout << players[i].getIme() << " je bacio " << random << endl;
			if (random == sveKune) {
				players[i].povecajBodove();
				cout << players[i].getIme() << " je pogodio ukupan broj kuna!!!" << endl;
				// kad je neko pogodio ukupan broj kuna igraci opet odlucuju koji broj kuna staviti u ruku
				cout << endl;

				smanjiKod(&broj, dksi, i);
				sveKune = 0;
				prebrojiSveKune();
			}
			cout << endl;
		}
		// to ako je igrac covjek
		else {
			cout << "Red je na " << players[i].getIme() << "." << endl;
			cout << "Odaberite broj za pogoditi." << endl;
			int odabir;
			cin >> odabir;
			cout << players[i].getIme() << " je bacio " << odabir << endl;
			if (odabir == sveKune) {
				players[i].povecajBodove();
				cout << players[i].getIme() << " je pogodio ukupan broj kuna!!!" << endl;
				// kad je neko pogodio ukupan broj kuna igraci opet odlucuju koji broj kuna staviti u ruku
				cout << endl;

				smanjiKod(&broj, dksi, i);
				sveKune = 0;
				prebrojiSveKune();
			}
			cout << endl;
		}
		i++;
		if (i == brojIgraca) {
			i = 0;
		}
	}
}

