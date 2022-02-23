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

void Vector::menor(int v[],int n)
	{
		int menor=9999;
		for(int i=0;i<n;i++)
		{
			cout<<"ingrese un numeero: "<<endl;
		    cin>>v[i];
		    if(v[i]<menor)
		    {
			    menor=v[i];
			

		}
		cout<<"el numero menor es : "<<menor<<endl;

	}
	
