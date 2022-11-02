#ifndef vjezba6.h
#define vjezba6.h
#include <iostream>
using namespace std;

class Animal { //klasa koja ne moze imati objekte, svrha -> roditelj drugim klasama

	private:
		int noge = 0;
		string ime;

	public:
		virtual int zbroj_nogu() = 0; //funkcij koja se mora overridedat
		virtual string get_ime(){ return ime; };

};

class Kukac: public Animal
{
    private:
        string ime = "Kukac";
	public:
        int zbroj_nogu() = 0;
		string get_ime(){ return ime; };

};

class Ptica : public Animal
{
    private:
        string ime = "Ptica";
    public:
        int zbroj_nogu() = 0;
        string get_ime(){ return ime; };

};

class Pauk : public Animal
{
    private:
        string ime = "Pauk";
    public:
        int zbroj_nogu() = 0;
        string get_ime(){ return ime; };
};

/***ptice***/

class Sova : public Ptica {

    private:
    string ime = "Sova";
    int noge = 2;
    public:
    string get_ime(){ return ime; };
    int zbroj_nogu(){ return noge; }
};

class Vrabac : public Ptica {

    private:
    string ime = "Vrabac";
    int noge = 2;
    public:
    string get_ime(){ return ime; };
    int zbroj_nogu(){ return noge; }
};

/***kukci***/

class Bubamara : public Kukac{
    private:
        string ime = "Bubamara";
        int noge = 6;
    public:
        string get_ime(){ return ime; };
        int zbroj_nogu(){ return noge; }

};

class Bogomoljka : public Kukac{
    private:
        string ime = "Bogomoljka";
        int noge = 6;
	public:
	    string get_ime(){ return ime; };
        int zbroj_nogu(){ return noge; }

};

/***pauci***/

class Tarantula : public Pauk{

    private:
        string ime = "Tarantula";
        int noge = 8;
	public:
		string get_ime(){ return ime; };
        int zbroj_nogu(){ return noge; }
};

class Crna_Udovica : public Pauk{
    private:
        string ime = "Crna Udovica";
        int noge = 8;
	public:
		string get_ime(){ return ime; };
        int zbroj_nogu(){ return noge; }

};

class Brojac{

    private:
        int brojac = 0;
    public:
        int zbroj_nogu(Animal &a) { return a.zbroj_nogu(); };
        string get_ime(Animal &a) { return a.get_ime(); };
        void dodaj_zivotinja(Animal &a);
        void print() { cout << "Broj nogu: " << brojac; };
};

void Brojac::dodaj_zivotinja(Animal &a){
    brojac += a.zbroj_nogu();
    cout << "Dodana zivotinja: " << a.get_ime() << endl;
}

#endif
