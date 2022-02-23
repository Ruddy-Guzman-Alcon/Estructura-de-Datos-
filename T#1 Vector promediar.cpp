#include "StdAfx.h"
#include "Vector.h"
#include"math.h"


Vector::Vector(void)
{
}


Vector::~Vector(void)
{
}

 void Vector::cargarVector(int v[], int n)
	{
		for (int i=0;i<n;i++)
		{
			cout<<"v["<<i<<"] = ";
			cin>>v[i];

		}

	}
	void Vector::mostrarVector(int v[], int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<", "<<endl;


		}
		cout<<endl;
	}
	void Vector::promedio(int v[], int n)
    {
	   double p1, p2, p3;
	p1 = 0;
	p2 = 0;
	p3 = 0;

	int* k = new int[5];

	for(int i = 0; i < 5; i++){
		int valor;
		cout << "ingrese un valor ";
		cin >> valor;
		v[i] = valor;
	}

	p1 = (v[0] + v[1] + v[2]) / 3;
	p2 = (v[1] + v[2] + v[3]) / 3;
	p3 = (v[2] + v[3] + v[4]) / 3;

	cout << "promedio 1 " << p1 << endl;
	cout << "promedio 2 " << p2 << endl;
	cout << "promedio 3 " << p3 << endl;


	}
