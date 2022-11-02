#include <iostream>
#include <cstring>

using namespace std;

unsigned int *pozitivni_cijeli_brojevi(unsigned int *size){

    unsigned int brojac=0;
    unsigned int n=10;
    unsigned int* niz = new unsigned int[n];
    unsigned int* temp;

    cout << "unesi niz:" << endl;
    int i=0;

    while (n)
    {
        cin >> niz[i];
        if (niz[i]==0)
            break;
        brojac++;
        if (brojac==n)
        {
            n*=2;
            temp = new unsigned int[n];
            memcpy(temp,niz,n/2);
            delete[] niz;
            niz = temp;
        }
    }
    *size = brojac;
    return niz;
}

int main()
{
    unsigned int n=0;
    unsigned int* niz=pozitivni_cijeli_brojevi(&n);
    cout << "velicina niza: " << n << endl;

    for (int i=0; i<n; i++){
        cout << niz[i] << ' ' << endl;
    }

    delete[]niz;
    niz=0;
    return 0;

}
