#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <ctime>
#include <random>
#include <list>
using namespace std;

void izbacuje_praznine(string& str){

    string razmak = " ";

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ' && (str[i + 1] == ',' || str[i+1] == '.'))
            str.erase(str.begin() + i);
        if (str[i] == ',' && str[i + 1] != ' ')
            str.insert(i + 1, razmak);
    }
}

void unos_str(list<string>& ls_str, int brojElemenata)
{
    string tekst;
    for (int i = 0; i < brojElemenata; i++) {
        cout << "Unesite string: " << endl;
        cin >> tekst;
        ls_str.push_back(tekst);
    }
}

int broj_slova(list<string> ls_str)
{
    int br_slova = 0;
    string temp;
    for (list<string>::iterator i = ls_str.begin(); i != ls_str.end(); i++){
        temp = *i;
        br_slova += temp.size();
    }
    return br_slova;
}

double prosjek_duljina(list<string> ls_str)
{
    list<int> velicine;
    int velicina;
    for (list<string>::iterator i = ls_str.begin(); i != ls_str.end(); i++) {
        std::string temp = *i;
        velicina = temp.size();
        velicine.push_back(velicina);
    }
    double avg = 0;
    for (list<int>::iterator i = velicine.begin(); i != velicine.end(); i++)
        avg += *i;
    avg = avg / velicine.size();
    return avg;
}

void izbaci_najduzi(list<string>& ls_str)
{
    int max = 0;
    string s;
    string temp;
    for (list<string>::iterator i = ls_str.begin(); i != ls_str.end(); i++){
        temp = *i;
        if (temp.size() > max) {
            max = temp.size();
            s = *i;
        }
    }
    ls_str.remove({ s });
    return;
}

void list_print(list<string> ls_str)
{
    for (list<string>::iterator i = ls_str.begin(); i != ls_str.end(); i++)
        cout << *i << endl;
    return;
}

int main()
{

    string tekst = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .";
    izbacuje_praznine(tekst);
    cout<< tekst <<endl;;

    list<string> lista_stringova;
    unos_str(lista_stringova, 3);

    int slova = broj_slova(lista_stringova);
    cout << slova << endl;

    int char_n = prosjek_duljina(lista_stringova);
    cout << char_n << endl;

    izbaci_najduzi(lista_stringova);
    list_print(lista_stringova);

}
