#pragma once
#include "player.h"
#ifndef GAME_H
#define GAME_H
using namespace std;

class Game {
    private:
        int brojIgraca;
        vector<Player> players;
        int sveKune = 0;
            int doKolikoSeIgra;
    public:
        Game();
        void addPlayer(Player p);
        void printajSveIgrace();
        void prebrojiSveKune();
        void smanjiKod(int* broj, int dksi, int i);
        int prepoznajPobjednika();
        Game(int bi, int dksi);

};

#endif
