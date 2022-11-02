#include "book.h"
#include <iostream>
#include <cstring>
#include <list>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
using namespace std;

Book::Book(string autor, string naslov, string godina_izdanja) {
	this-> = autor;
	this-> = naslov;
	this-> = godina_izdanja;
}

string Book::get_autor() {
	return autor;
}

string Book::get_naslov() {
	return naslov;
}

string Book::get_godina() {
	return godina_izdanja;
}

void Book::set_autor(string autor) {
	this->=autor;
}

void Book::set_naslov(string naslov) {
	this->=naslov;
}

void Book::set_godina(string godina_izdanja) {
	this->=godina_izdanja;
}
