#include <iostream>

using namespace std;

class vektor{

private:
    double* niz;
    int logicka; //current
    int fizicka; //capacitety

public:
    void vector_new(int z);
    void vector_delete(){delete[] niz;}
    void vector_push_back(const int korak);
    void vector_pop_back() {niz[logicka--];}
    int vector_front(){return niz[0];}
    int vector_back(){return niz[logicka-1];}
    int vector_size() {return logicka;}
    void vector_print();

    vektor();
    vektor(int n, int k=0);
    vektor(const vektor& V1);
    ~vektor();

};
