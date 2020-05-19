#ifndef  EJER1_H
#define EJER1_H
#include <iostream>

using namespace std;

namespace parcial
{
	
	void mostrarAutor()
	{
		cout << "Tourret, Juan Cruz. Visual Studio 2019" << endl;
	}

	float diferencia(float a, float b)
	{
		float dif = a - b;
		if (dif < 0)
		{
			dif = -dif;
		}
		return dif;
	}
}
#endif // ! EJER1_H