#include<iostream>
#include<fstream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

template<typename TYPE, int d>
class array
{
	vector<TYPE> polje;
public:
	array(int p);
	TYPE& operator[](int i);
	TYPE& begin();
	TYPE& end();
};

template<typename TYPE, int d>
array<TYPE, d>::array(int p)
{
	this->polje.resize(d);
	fill(polje.begin(), polje.end(), p);
}

template<typename TYPE, int d>
TYPE& array<TYPE, d>::operator[](int i)
{
	return this->polje[i];
}

template<typename TYPE, int d>
TYPE& array<TYPE, d>::begin()
{
	return niz;
}

template<typename TYPE, int d>
TYPE& array<TYPE, d>::end()
{
	return niz[d-1];
}


int main()
{
	ostream_iterator<short> os(cout, " ");
	array<short, 10> a(4);
	a[0] = a[2] += 5;
	copy(a.begin(), a.end(), os);
}
