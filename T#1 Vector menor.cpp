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
