#include "library.h"

Library::Library() {
	n = 10;
	niz = new Book* [n];
}
Library::~Library() {
	delete[] niz;
}
