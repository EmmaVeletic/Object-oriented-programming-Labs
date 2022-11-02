#include "trecizad.hpp"

int main()
{
	ifstream file("tekst.txt");
	vector<int> vektor;

	if (!(file.is_open()))
    {
		cout << "Greška!";
		return -1;
	}
	try{
		vektor = napuni(file);
		prebroji(vektor);
		cout << "Vektor sa svim brojevima: " << endl;

		for (int i = 0; i < vektor.size(); i++)
			cout << vektor[i] << endl;

		izbaci(vektor);

		cout << "Bez brojeva manjih od 100: " << endl;

		for (int i = 0; i < vektor.size(); i++)
			cout << vektor[i] << endl;

        cout << "Sortirano silazno: " << endl;

		sortiraj(vektor);
	}
	catch (int broj)
	{
		cout << "Nije prirodan broj!"<<endl;
	}
}
