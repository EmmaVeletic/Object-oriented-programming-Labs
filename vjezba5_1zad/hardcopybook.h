#ifndef HARDCOPYBOOK_H
#define HARDCOPYBOOK_H
#include <cstring>
#include "book.h"

class HardCopyBook : public Book
{
private:
    int broj_stranica;

public:
    HardCopyBook(string autor, string naslov, string godina_izdanja, int bs);
	int get_broj_stranica();
	void set_broj_stranica(int b);
	int vrati_megabajte();

};

#endif
