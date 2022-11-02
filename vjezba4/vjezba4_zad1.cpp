#include <iostream>
#include "vjezba4_zad1.h"
#include <cstring>
#include <cmath>
#include <time.h>

using namespace std;


//default konstruktor
vektor::vektor(){

    niz=new double[20];
    logicka=0;
    fizicka=20;

    cout << "Poziva se default konstruktor!" << endl;
}
//konstruktor sa parametrima
vektor::vektor(int n, int k): fizicka(n){
    niz=new double[n];

    for(int i=0;i<n;i++){
        niz[i]=k;
    }
    cout << "Poziva se konstruktor sa parametrima!" << endl;
}

//copy konstruktor
vektor::vektor(const vektor& V1) {


    this->logicka=V1.logicka;
    this->fizicka=V1.fizicka;
    double* niz= new double[fizicka];

    for(int i=0;i<logicka;i++){
    niz[i]=V1.niz[i];
    }
    cout << "Poziva se copy konstruktor!" << endl;
}

vektor::~vektor(){
    delete[] niz;
    cout <<"destruktor" << endl;

}

int main(){

    vektor V1;
    vektor V2=V1;
    vektor V3(10,20);
    return 0;
}
