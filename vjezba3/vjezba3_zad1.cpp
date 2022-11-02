#include <iostream>
#include "vjezba3_zad1.h"
#include <cstring>
#include <cmath>
#include <time.h>

using namespace std;

void vektor::vector_new(int z){

    niz=new double[z];
    logicka=0;
    fizicka=z;

}

void vektor::vector_push_back(const int korak){

    if (fizicka==logicka)
    {
        double *novi = new double [fizicka*2];
        memcpy(novi, niz,logicka); //destionation, source, size
        fizicka*2;
        delete[] niz;
        niz = novi;
    }
    niz[logicka++] = korak;

}

void vektor::vector_print(){

    for(int i=0; i<logicka;i++){
        cout <<niz[i] << endl;
    }

}

int main()

{
    vektor v;
    v.vector_new(5);

    v.vector_push_back(1);
    v.vector_push_back( 2);
    v.vector_push_back(3);
    v.vector_push_back( 4);
    v.vector_push_back(5);

    cout << "Stavljanje elemenata" << endl;

   v.vector_print();

    cout <<  "prvi el: " << v.vector_front() << endl;
    cout <<  "zadnji el: " << v.vector_back() << endl;
    cout <<  "velicina vektora: " << v.vector_size() << endl;

    v.vector_pop_back();
    v.vector_pop_back();
    v.vector_pop_back();

    cout << "Vadjenje elemenata" << endl;

    v.vector_print();

    v.vector_delete();

    return 0;
}
