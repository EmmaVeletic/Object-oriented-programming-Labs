#ifndef vjezba7.h
#define vjezba7.h
#include <string>
#include <iostream>
using namespace std;

namespace oss
{
class Vehicle
{
    public:
		virtual string type() = 0;
		virtual unsigned passengers() = 0;
		virtual ~Vehicle() = 0;
};

class Watercraft : virtual public Vehicle
{
	public:
		string type();
};

class Aircraft : virtual public Vehicle
{
	public:
		string type();
};

class Catamaran : public Watercraft
{
    private:
        unsigned passNum;

	public:
		Catamaran(int p);
		unsigned passengers();
};

class Seaplane : public Watercraft, public Aircraft
{
	private:
		unsigned passNum;
	public:
		Seaplane(int p);
		string type();
		unsigned passengers();
};

class Ferry : public Watercraft
{
    private:
		unsigned passNum;
	public:
		Ferry(int p, int b, int c);
		unsigned passengers();
};

class Counter
{
	private:
		int totalPassengers;
	public:
		Counter();
		void dodaj(Vehicle *v);
		int total();
};
}
#endif

