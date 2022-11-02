#include "vjezba12.h"

istream& operator>>(istream& is,igracice& i)
{
    return is >> i.redni_broj >> i.ime >> i.prezime >> i.drzava >> i.broj_pogresaka >> i.broj_meceva;
}

vector<igracice> ucitaj_igracice(ifstream& file)
{
    istream_iterator<igracice> it(file); //setamo s njim kroz datoteku
    istream_iterator<igracice> kraj; // kraj datoteke

    vector<igracice> vec;
    copy(it, kraj, back_inserter(vec));

    return vec;
}

void izbaci_dvostruke_pogreske(vector<igracice>& vec)
{
    vector<igracice>::iterator it = vec.begin();

    while (it != vec.end())
    {
        if(it->get_broj_pogresaka() >= 4)
        {
            it = vec.erase(it);
        }
        else
            it++;
    }
}

void pronadi_najmanje_pogresaka(vector<igracice> vec)
{
    int najmanje = 10;
    igracice i;

    for (vector<igracice>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        if (it->get_broj_pogresaka() < najmanje)
        {
            najmanje = it->get_broj_pogresaka();
            i = (*it);
        }
    }
    cout << "Igracica s najmanje pogresaka: " << i.get_ime() << " " << i.get_prezime();
}

bool kriterij_za_sort(igracice i1, igracice i2)
{
    if (i1.get_broj_pogresaka() < i2.get_broj_pogresaka())
    {
        return true;
    }
    return false;
}

void sortiraj(vector<igracice>& vec)
{
    sort(vec.begin(), vec.end(), kriterij_za_sort);
}

void ispisi_sortirano(vector<igracice>& vec)
{
    for(vector<igracice>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << it->get_redni_broj() << " ";
        cout << it->get_ime() << " ";
        cout << it->get_prezime() << " ";
        cout << it->get_broj_pogresaka() << endl;
    }
}


int main()
{
    ifstream file("winbledon_double_faults.txt");

    if(!(file.is_open()))
    {
        cout << "Greska!";
        return 0;
    }

    vector<igracice> vec = ucitaj_igracice(file);

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].get_ime() <<  " " << vec[i].get_prezime() << endl;
    }

    cout << "Igracice koje su imale 4 ili vise pogresaka:" << endl;
    izbaci_dvostruke_pogreske(vec);

    for(int i = 0; i < vec.size();i++)
    {
        cout << vec[i].get_ime() <<  " " << vec[i].get_prezime() << endl;
    }
    pronadi_najmanje_pogresaka(vec);
    cout << endl;

    cout << "Sortiramo po broju dvostrukih pogresaka: " << endl;
    sortiraj(vec);

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].get_ime() << " " << vec[i].get_prezime() << " " << vec[i].get_broj_pogresaka() << endl;
    }

    cout << "Sortiraj: " << endl;
    ispisi_sortirano(vec);
}
