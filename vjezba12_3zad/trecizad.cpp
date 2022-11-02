#include "trecizad.hpp"

vector<int> napuni(istream& file)
{
	vector<int> vektor;
	istream_iterator<int> is(file), end;
	copy(is, end, back_inserter(vektor));
	vector<int>::iterator it = vektor.begin();

	while (it != vektor.end())
    {
		if ((*it) <= 0)
        {
			throw int();
		}
		it++;
	}
	return vektor;
}

void prebroji(vector<int> vektor)
{
	int brojac = 0;
	for (vector<int>::iterator it = vektor.begin(); it != vektor.end(); it++)
    {
		if ((*it) > 100)
			brojac++;

	}
	cout << "Broj brojeva vecih od 100: " << brojac << endl;
}

void izbaci(vector<int>& vektor)
{
	vector<int>::iterator it = vektor.begin();

	while (it != vektor.end())
    {
		if ((*it) < 100)
			it = vektor.erase(it);

		else
			it++;

	}
}

void sortiraj(vector<int>& vektor)
{
	sort(vektor.begin(), vektor.end(), uvjet);

	for (int i = 0; i < vektor.size(); i++)
        cout << vektor[i] << endl;

}

bool uvjet(int a, int b)
{
	return a > b ? true : false;
}
