#ifndef vjezba8.h
#define vjezba8.h
#include <iostream>
using namespace std;

class Money
{
    private:
        int kune,lipe;
    public:
        Money(int k = 0, int l = 0) { kune = k; lipe = l; }
        Money operator+(Money const &obj);
        Money operator-(Money const &obj);
        Money operator+=(Money const &obj);
        Money operator-=(Money const &obj);
        friend ostream& operator << (ostream& os, Money const &obj);
        //void print() { cout << kune << "kuna, " << lipe << " lipa" << endl; }
        Money reduce_kn();
        Money increse_kn();
};

class Razlomak
{
    private:
        int num, den;
    public:
        Razlomak(int n, int d) { num = n; den = d; }
        operator double() const { return double(num) / double(den); }
};

#endif
