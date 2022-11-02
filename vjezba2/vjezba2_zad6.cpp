#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

typedef struct vektor{

    int *niz;
    int logicka;
    int fizicka;

}vektor;

vektor* vector_new(){

    vektor* x = new vektor;
    x->niz=0;
    x->logicka=0;
    x->fizicka=0;
    return x;
}

void vector_delete(vektor* x){

    delete[] x;
}

void vector_push_back(vektor* x,const int korak){

    if (x->fizicka==x->logicka)
    {
        int *novi = new int [x->fizicka*2];
        memcpy(novi, x->niz,x->logicka); //destionation, source, size
        x->fizicka*2;
        delete[] x->niz;
        x->niz = novi;
    }
    x->niz[x->logicka++] = korak;

}

void vector_pop_back(vektor* x){

    x->niz[x->logicka--];
}

int vector_front(vektor* x){

    return x->niz[0];
}

int vector_back(vektor* x){

    return x->niz[x->logicka-1];
}

int vector_size(vektor* x){

    return x->logicka;
}

int main()
{
    vektor *x=vector_new();

    vector_push_back(x, 1);
    vector_push_back(x, 2);
    vector_push_back(x, 3);
    vector_push_back(x, 4);
    vector_push_back(x, 5);

    cout << "Stavljanje elemenata" << endl;

    for (int i=0; i < x->logicka; i++){
        cout << x->niz[i] << ' ' << endl;
    }

    cout <<  "prvi el: " << vector_front(x) << endl;
    cout <<  "zadnji el: " << vector_back(x) << endl;
    cout <<  "velicina vektora: " << vector_size(x) << endl;

    vector_pop_back(x);
    vector_pop_back(x);
    vector_pop_back(x);

    cout << "Vadjenje elemenata" << endl;

    for (int i=0; i < x->logicka; i++){
        cout << x->niz[i] << ' ' << endl;
    }

    //vector_delete(v);
    return 0;
}
