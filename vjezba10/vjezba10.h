#include <string>
#include <fstream>
#include <time.h>
#include <chrono>
#include <ctime>
using namespace std;


class Error : public exception
{
	string poruka;

public:
	Error(const string& por) : poruka(por) {}

	string dohvatiPoruku() const
	{
		return poruka;
	}

	void zapisiGresku(const string& dok) const
	{

		auto vrijeme = chrono::system_clock::now();
		time_t time = chrono::system_clock::to_time_t(vrijeme);
		ofstream errorLog;
		errorLog.open(dok);
		errorLog << ctime(&time) << " "<< poruka << " \n";
		errorLog.close();
	}
};


class brojError : public Error
{
	string poruka;

public:
	brojError() : Error("Nije unesen broj") {}
};

class djeljenjeError : public Error
{
	string poruka;

public:
	djeljenjeError() : Error("Djeljenje s 0") {}
};

class operatorError : public Error
{
	string poruka;

public:
	operatorError() : Error("Problem s operatorom") {}
};
