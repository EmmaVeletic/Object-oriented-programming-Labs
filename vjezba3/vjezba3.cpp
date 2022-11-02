#include <iostream>
#include "vjezba3.h"
#include <cstring>
#include <cmath>
#include <time.h>

using namespace std;

void point::postavljanje_vrijednosti(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
double point::random_vrijednost(int a, int b)
{
    this->x = a + rand() % (b - a + 1);
    this->y = a + rand() % (b - a + 1);
    this->z = a + rand() % (b - a + 1);
}

double point::dohvaca_vrijednost (double& x,double& y, double& z)
{
    x=this->x;
    y=this->y;
    z=this->z;

}

double point::udaljenost_2d(point t)
{
	 return sqrt((x - t.x) * (x - t.x) + (y - t.y) * (y - t.y));//x je tocka nad kojom pozivamo classu, a t je druga tocka s kojom pristupamo classi
}

double point::udaljenost_3d(point t)
{
	return sqrt((x - t.x) * (x - t.x) + (y - t.y) * (y - t.y) + (z - t.z) * (z - t.z));
}

unsigned int weapon::shoot()
{
    if(tren_metak!=0){
        tren_metak--;
    }
    cout << "Nema metaka!" << endl;

}

void weapon::reload()
{
    tren_metak==maks_metak;
    cout <<"Novo punjenje..." << endl;
}
void weapon::postavi(point t)
{
    tocka=t;

}

void target::postavi_metu(point tocka1, point tocka2)
{
    left_point = tocka1;
    right_point = tocka2;

}

bool target:: pogodjena(double z)
{
    double a,b,c;
    left_point.dohvaca_vrijednost(a,b,c);
    if(z>=c)
    {
      right_point.dohvaca_vrijednost (a,b,c);

      if(z<=c)
      {
          return true;
      }
    }
    return false;

}

int weapon:: pucaj(target* &niz, int n)
{
    double a,b,c;
    int brojac=0;

    tocka.dohvaca_vrijednost(a,b,c);

    for(int i=0;i<n;i++){
        if(niz[i].pogodjena(c)){
            brojac++;

        }
    }
    return brojac;

}

int main()

{
   srand(time(NULL));

   point p1,p2;

   p1.random_vrijednost(1,30);
   p2.random_vrijednost(1,30);


   cout<<"p1 - 2d udaljenost: "<<p1.udaljenost_2d(p2)<<endl;
   cout<<"p1 - 3d udaljenost: "<<p1.udaljenost_3d(p2)<<endl;
   cout<<"p2 - 2d udaljenost: "<<p2.udaljenost_2d(p1)<<endl;
   cout<<"p2 - 3d udaljenost: "<<p2.udaljenost_3d(p1)<<endl;

    weapon o1;

    o1.shoot();
    o1.reload();
    o1.postavi(p1);

    int n=3;
    target* niz=new target[n]; //objekt

    for(int i=0; i<n; i++){
        point t1;
        point t2;
        double x,y,z;
        t1.random_vrijednost(1,30);
        t1.postavljanje_vrijednosti(x,y,z);
         cout <<" Prva tocka je unesena. " << endl;

        t2.random_vrijednost(1,30);
        t2.postavljanje_vrijednosti(x,y,z);
        cout <<" Druga tocka je unesena. " << endl;
        niz[i].postavi_metu(t1,t2);
        cout<<"--------------------------"<<endl;

    }
    cout << "meta je pogodjena " << o1.pucaj(niz,n)<<" puta" << endl;

    return 0;
}
