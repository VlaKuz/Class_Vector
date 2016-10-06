#include "Vector.h"


Vector::Vector(void)
{
	size=0;
	mass_koord=0;
	StartIndex=0;
}


Vector::Vector(int _size,int _Start_Index)
{
size=_size;
StartIndex=_Start_Index;
mass_koord=new double[size];
for (int i=0;i<size;i++)
		mass_koord[i]=0;
}

Vector::Vector(int _size, double *_mass_koord,int _Start_Index )
{
	StartIndex=_Start_Index;
	size=_size;
	mass_koord=new double[size];
	for (int i=0;i<size;i++)
		mass_koord[i]=_mass_koord[i];
}

Vector::Vector(int a, int b,Vector &B)    
    {
       int m = a;               
        mass_koord = new double[b - a]; 
        size = b - a;	
        for (int i = 0; i < size;i++)
		{
	        mass_koord[i] =B.mass_koord[i];    
		}
}

Vector::Vector (Vector &B)
{
	mass_koord=new double [B.size];
	StartIndex=B.StartIndex;
	size=B.size;
	for (int i=0;i<size;i++)
		mass_koord[i]=B.mass_koord[i];
}


double & Vector::operator[](int i){
	
	if ((i>size+StartIndex)||(i<StartIndex))
	{
		cout<<"Ошибка!!! Индекс вне диапазона "<<endl;
	}
	else
	{
		
		return mass_koord[i-StartIndex];

	}
}

Vector Vector::operator+(const Vector &B)
{
	Vector Res (size, StartIndex);
	if (size==B.size)
	{ 
		if (StartIndex==B.StartIndex)
		{
		for (int i=0;i<size;i++)
			Res.mass_koord[i]=mass_koord[i]+B.mass_koord[i];
		}
		else
		{
			cout<<"oшибка! не совпали границы индексов"<<endl;
		}
	}
	else
	{
		cout<<"ошибка: несовпадение размерностей!"<<endl;
	}
	return Res;
}

Vector Vector::operator-(const Vector &B)
{
	Vector Res (size,StartIndex);
	if (size==B.size)
	{
		if (StartIndex==B.StartIndex)
		{
		for (int i=0;i<size;i++)
			Res.mass_koord[i]=mass_koord[i]-B.mass_koord[i];
		}
		else
		{
			cout<<"oшибка! не совпали границы индексов"<<endl;
		}
	}
	else
	{
		cout<<"ошибка: несовпадение размерностей!"<<endl;
	}
	return Res;
}


Vector & Vector::operator* (int &a)
{
	for (int i=0;i<size;i++)
		this->mass_koord[i]*=a;
	return (*this);
}

Vector & Vector::operator/ (int &a)
{

	for (int i=0;i<size;i++)
		this->mass_koord[i]/=double(a);
	return (*this);
}



void Vector::Print_Vector()
{
	cout<<"Кол-во элементов "<<size<<endl;
	cout<<"Вектор:"<<endl;
	for (int i=0;i<size;i++)
		cout<<mass_koord[i]<<' ';
	cout<<endl;
}

void Vector::Print_Elem_Vector(int i)
{
	cout<<i<<"-ый элемент массива координат вектора:"<<endl;
	cout<<mass_koord[i-StartIndex];
}

Vector & Vector::operator=(const Vector &a)
{
	if (this!=&a)
	{
		if (size!=a.size)
		{
	delete[]mass_koord;
	mass_koord=new double[a.size];
		}
	StartIndex=a.StartIndex;
	size=a.size;
	for (int i=0;i<size;i++)
		mass_koord[i]=a.mass_koord[i];
	}
	return (*this);
}

Vector::~Vector(void)
{
	delete[]mass_koord;
	mass_koord=0;
	size=0;
	StartIndex=0;
}
