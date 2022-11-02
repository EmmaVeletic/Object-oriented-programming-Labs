#include <iostream>

tpedef struct point{

    float a,b;

}point;

typedef struct rectangle{

    float sirina, visina;
    point s;

}rectangle;

typedef struct circle{

    float radius;
    point s;

}circle;

rectangle* broj_pravokutnika(const rectangle &p[N], const circle &k, unsigned int& size)
{

}

int broj_koji_se_sijece(rectangle *p, circle k)
{

}


int main()
{
    point s;
    circle k;
    rectangle p1,p2,p3,p[3];
    unsigned int size=0;
    s.a = 0.0; s.b = 0.0;
    p1.visina=22.0;
    p1.sirina=10.0;
    p2.visina=16.0;
    p2.sirina=6.0;
    p3.visina=14.0;
    p3.sirina=9.1;
    p[0]=p1;
    p[1]=p2;
    p[2]=p3;

    for (int i = 0; i<3; i++)
    {
        cin >> p[i].sirina

    }

    cout << "Broj pravokutnika: " << size << endl;
    for (int i=0; i<size; i++)

    return 0;
}

