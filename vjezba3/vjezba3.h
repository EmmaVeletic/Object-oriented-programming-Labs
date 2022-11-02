#include <iostream>

using namespace std;

class point{

    double x = 0,y = 0,z = 0;

public:
    void postavljanje_vrijednosti(double x, double y, double z);
    double random_vrijednost(int a, int b);
    double dohvaca_vrijednost(double& x, double& y, double& z);
    double udaljenost_2d(point t);
    double udaljenost_3d(point t);

};

class target{

    point left_point;
    point right_point;
    bool stanje_target;

public:
    void postavi_metu(point tocka1,point tocka2);
    bool pogodjena(double z);

};

class weapon{

    point tocka;
    unsigned int maks_metak=15;
    unsigned int tren_metak;

public:
    void reload();
    unsigned int shoot();
    void postavi(point tocka); //prostor
    int pucaj(target* &niz, int n);

};
