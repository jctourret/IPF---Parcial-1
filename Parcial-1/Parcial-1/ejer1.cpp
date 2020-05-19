#include <iostream>
#include "ejer1.h"

using namespace std;
using namespace parcial;

int main()
{
	mostrarAutor();

	float dif1 = diferencia(5.0f,5.5f);
	cout << "La diferencia es: " << dif1 << endl;

	float dif2 = diferencia(5.5f, 4.5f);
	cout << "La diferencia es: " << dif2 << endl;
}