#include <iostream>
#include <string>
#include "vjezba10.h"
#include <fstream>
using namespace std;

int unesiBroj()
{
	int br;
	cout << "Unesite broj: ";
	cin >> br;
	if (cin.fail())
	{
		throw brojError();
	}

	return br;
}

char unesiOperator()
{
	string op;
	cout << "Unesite operaciju: ";
	cin >> op;

	if(op != "+" &&	op != "-" && op != "*" && op != "/")
	{

		throw operatorError();
	}
	return op[0];
}

double izracunaj(int a, int b, char opr)
{
	if (b == 0 && opr == '/')
	{
		throw djeljenjeError();
	}

	switch (opr)
	{
	case('+'):
		return a + b;
	case('-'):
		return a - b;
	case('*'):
		return a * b;
	case('/'):
		return a / b;
	default:
		throw Error("Problem s operatorom!");
	}
}

int main()
{
	try
	{
		int br1 = unesiBroj();
		char op = unesiOperator();
		int br2 = unesiBroj();

		cout << izracunaj(br1, br2, op);
	}
	catch (Error& calculationError)
	{
		calculationError.zapisiGresku("error.log");
	}

	system("pause");


}
