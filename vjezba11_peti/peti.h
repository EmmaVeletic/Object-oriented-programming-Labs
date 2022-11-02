#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <ctime>
#include <random>
#include <list>
using namespace std;

class trokut
{
public:
    int a, b, c, opseg;
    trokut() {}
    trokut(int a, int b, int c) : a(a), b(b), c(c), opseg(a + b + c) {}
    void print() { cout << a << " " << b << " " << c << " " << opseg << endl; }
};
class trokut_list
{
public:
    vector<trokut> v;

    void input(trokut t){
        v.push_back(t);
    }
    void printtl(){
        for (int i = 0; i < v.size(); i++)
            v[i].print();
    }
    trokut& najveci(){
        int opseg2 = 0;
        trokut& tr = v[0];
        for (int i = 0; i < v.size(); i++) {
            if (v[i].opseg > opseg2) {
                opseg2 = v[i].opseg;
                tr = v[i];
            }
        }
        return tr;
    }
};
