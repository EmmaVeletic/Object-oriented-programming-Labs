#include "peti.h"

using namespace std;

int main()
{
    trokut a(2, 3, 4);
    trokut b(4, 5, 6);
    trokut_list lst;
    trokut t;
    lst.input(a);
    lst.input(b);
    t = lst.najveci();
    t.print();
    //lst.printtl();
}
