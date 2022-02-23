#pragma once
#include"iostream"

using namespace std;

class Vector
{
	private:
	////Atributos
	int v[100];
	int n;     ///Tamaño del vector
	
public:  ///Metodos

	Vector(void);
	~Vector(void);

	///Metodos
	void cargarVector(int v[], int n);
	void mostrarVector(int v[], int n);
		
}
