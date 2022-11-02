#include "ebook.h"
#include <iostream>
#include <cstring>
#include "book.h"
using namespace std;

EBook::EBook(string autor, string naslov, string godina, string ime_datoteke, int velicina) {

	this-> = autor;
	this-> = naslov;
	this-> = godina;
	this-> = ime_datoteke;
	this-> = velicina;
}

string EBook::get_ime() {
	return ime_datoteke;
}
void EBook::set_ime(string ime_datoteke) {
	this->=ime_datoteke;
}
int EBook::get_velicina() {
	return velicina;
}
void EBook::set_velicina(int velicina) {
	this->=velicina;
}

int EBook::vrati_megabajte(){
	return velicina;
}
