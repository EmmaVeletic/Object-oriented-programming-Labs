#include <iostream>
#include <array>

using namespace std;

int& vraca_referencu(int niz[],int n, int& x)
{
    int temp;

    for(int i=0; i<n; i++)
    {
        if(niz[i]<0)
            temp=niz[i];
    }

    x=temp+1;

    return x;

}

int main()
{
    int n=4;
    int niz[n]={5,-6,7,8};
    int x;
    vraca_referencu(niz, n, x);
    cout << "broj uvecan za 1: " << x << endl;

    return 0;
}
