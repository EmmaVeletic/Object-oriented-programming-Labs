#include <algorithm>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

bool compare(const char a,const char b){
    return toupper(a) <= toupper(b);
}

template <class type>
void sortiraj(type* toSort, unsigned int size){
    sort(toSort, toSort + size);
}

template <>
void sortiraj<char>(char * toSort, unsigned int size){
    sort(toSort, toSort + size, compare);
}


int main(){

    char niz[] = {'b', 'C', 'E', 'g', 'm', 'Z', 'y', 'W', 'Q', 'l'};
    int velicina = sizeof(niz) / sizeof(niz[0]);

    sortiraj<char>(niz, velicina);
    cout << "sortiraj navedeni niz kao charove:" << endl;
    for (int i = 0; i < velicina; ++i)
        cout << niz[i] << " ";
    cout << endl;


}
