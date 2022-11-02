#include "vjezba7.h"
#include <iostream>
using namespace std;

namespace oss{

	Vehicle::~Vehicle() {}

	string Watercraft::type() {
		return "Water";
	}

	string Aircraft::type() {
		return "Air";
	}

	Ferry::Ferry(int p, int b, int c) {
		this->passNum = p + b + (c * 5);

	}

	unsigned Ferry::passengers() {
		return this->passNum;
	}

	Catamaran::Catamaran(int n) {
		this->passNum = n;
	}

	unsigned Catamaran::passengers() {
		return this->passNum;
	}

	Seaplane::Seaplane(int n) {
		this->passNum = n;
	}

	string Seaplane::type() {
		return "Air-Water";
	}

	unsigned Seaplane::passengers() {
		return this->passNum;
	}

	Counter::Counter() {
		this->totalPassengers = 0;
	}

	void Counter::dodaj(Vehicle* v) {
		this->totalPassengers += v->passengers();
		cout << v->type() << ", putnika: " << v->passengers() << endl;
	}

	int Counter::total() {
		return this->totalPassengers;
	}

}

int main()
{
	using namespace oss;
	Counter c;
	Vehicle* v[] = { new Catamaran(30), new Ferry(10, 5, 3), new Seaplane(15) };
	size_t velicina = sizeof (v) / sizeof (v[0]);

	for (int i = 0; i < velicina; i++)
		c.dodaj(v[i]);

	cout << "Ukupno " << c.total() << " putnika" << endl;

	for (int i = 0; i < velicina; i++)
		delete v[i];
}
