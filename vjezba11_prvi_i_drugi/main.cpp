#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <ctime>
#include <random>
#include <list>
using namespace std;

void unos (vector<int> &vect, int brojElemenata)
{
    int vektor;
    for (int i = 0; i < brojElemenata; i++) {
        cout << "Unesite broj u vektor: " << endl;
        cin >> vektor;
        vect.push_back(vektor);
    }
}
void generiraj(vector<int>& vect, int brojElemenata, int min, int max)
{
    int randomBroj;
    srand(time(NULL));
    for (int i = 0; i < brojElemenata; i++) {
        randomBroj= (rand() % max) + min;
        vect.push_back(randomBroj);
    }
}
void print_v(vector<int> vect){
    for (vector<int>::iterator i = vect.begin(); i != vect.end(); ++i){
        cout << *i << endl;
    }
}

void func_vect(vector<int> vect1, vector<int> vect2, vector<int>& v1)
{
    int flag = 0;
    for (vector<int>::iterator i = vect1.begin(); i != vect1.end(); i++){
        for (vector<int>::iterator j = vect2.begin(); j != vect2.end(); j++){
            if (*i == *j)
                flag = 1;
        }
        if (flag == 0)
            v1.push_back(*i);
        flag = 0;
    }
}

int main ()
{
    vector<int> vect1;
    vector<int> vect2;
    vector<int> vect3;
    unos(vect1, 3);
    unos(vect2, 3);
    func_vect(vect1, vect2, vect3);
    print_v(vect3);

}
