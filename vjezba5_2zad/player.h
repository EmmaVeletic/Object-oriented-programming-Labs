#pragma once
#ifndef PLAYER_H
#define PLAYER_H
using namespace std;


class Player {
    private:
        string ime;
        int ruka;
        int bodovi = 0;
    public:
        Player();
        Player(string i, int r);
        string getIme();
        void setIme(string i);
        int getRuka();
        void setRuka(int r);
        int getBodovi();
        void setBodovi(int b);
        void povecajBodove();
        void toString();
};
#endif
