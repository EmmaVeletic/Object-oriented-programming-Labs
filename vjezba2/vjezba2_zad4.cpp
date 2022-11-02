#include <iostream>

using namespace std;

int* zbroj_prve_dvi_vrijednosti(int n)
{
    int* niz=new int(n);

    if (!niz)
        cout << "alokacija nije uspjela!\n";

    niz[0]=1;
    niz[1]=1;

    for(int i=2;i<n;i++){
        niz[i]=niz[i-2]+niz[i-1];
    }

    return niz;

}

int main()
{
    int n;
    cout <<"upisi velicinu niza:";
    cin >> n;

    int* niz=zbroj_prve_dvi_vrijednosti(n);
    cout << "vas niz je: ";
    for(int i=0;i<n;i++){
        cout << niz[i] << ' ';
    }

    return 0;

}
