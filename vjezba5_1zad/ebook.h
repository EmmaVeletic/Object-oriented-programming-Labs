#ifndef EBOOK_H
#define EBOOK_H
#include <cstring>
#include "book.h"
using namespace std;

class EBook : public Book {

private:
	string ime_datoteke;
	int velicina;
public:
	EBook(string autor, string naslov, string godina_izdanja, string ime_datoteke, int velicina);
	string get_ime();
	void set_ime(string ime_datoteke);
	void set_velicina(int velicina);
	int get_velicina();
	int vrati_megabajte();
};

#endif


