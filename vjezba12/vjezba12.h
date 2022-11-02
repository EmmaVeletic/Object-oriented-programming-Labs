#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class igracice
{
private:
    int redni_broj;
    string ime;
    string prezime;
    string drzava;
    int broj_pogresaka;
    int broj_meceva;

public:
    igracice(){};
    friend istream& operator>>(istream& is, igracice& i);
    igracice(const igracice& i) //copy konstruktor
    {
        this->redni_broj = i.redni_broj;
        this->ime = i.ime;
        this->prezime = i.prezime;
        this->drzava = i.drzava;
        this->broj_pogresaka = i.broj_pogresaka;
        this->broj_meceva = i.broj_meceva;
    }
    int get_redni_broj(){return redni_broj; };
    string get_ime() {return ime; };
    string get_prezime() {return prezime; };
    int get_broj_pogresaka() {return broj_pogresaka; };
};

vector<igracice> ucitaj_igracice(ifstream& file);
void izbaci_dvostruke_pogreske(vector<igracice>& vec);
void pronadi_najmanje_pogresaka(vector<igracice> vec);
bool kriterij_za_sort(igracice i1, igracice i2);
void sortiraj(vector<igracice>& vec);
void ispisi_sortirano(vector<igracice>& vec);
