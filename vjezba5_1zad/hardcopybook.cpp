#include "hardcopybook.h"
#include <iostream>
#include <cstring>
#include "book.h"

HardCopyBook::HardCopyBook(string autor, string naslov, string godina_izdanja, int bs) {
	set_autor(autor);
	set_naslov(naslov);
	set_godina(godina_izdanja);
	broj_stranica = bs;
}

int HardCopyBook::get_broj_stranica() {
	return broj_stranica;
}
void HardCopyBook::set_broj_stranica(int b) {
	broj_stranica = b;
}

int HardCopyBook::vrati_megabajte() {
	return 0;
}

