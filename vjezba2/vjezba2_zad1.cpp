#include <iostream>
#include <array>
#include <cstdio>

using namespace std;

int& min_max(int niz[], int n, int& maks, int& minn)
{

    maks=niz[0],minn=niz[0];

    for(int i=0; i<n; i++)
    {
        if ( niz[i] > maks)
        {
            maks=niz[i];
        }

        if (niz[i] < minn)
        {
            minn=niz[i];
        }
    }

}

int main()
{
    int n,i,maks,minn;
    cout <<"upisi velicinu:";
    cin >> n;
    cout <<"upisi elemente niza:";
    int niz[n];
    for(i=0; i < n; i++)
        cin >> niz[i];

    min_max(niz, n, maks, minn);
    cout << "max: " << maks << endl;
    cout << "min: " << minn << endl;

    return 0;
}
