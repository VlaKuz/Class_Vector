#pragma once

#include "iostream"
#include "conio.h"
#include "ctime"

using namespace std;

class Vector
{
private:
	int size;
	double *mass_koord;
	int StartIndex;

public:
	Vector (Vector &); //done
	Vector(int,double*,int); //done
	Vector(int,int); //done
	Vector (int,int,Vector &); //done
	Vector(void); //done
	~Vector(void); //done
	Vector operator+(const Vector &); //done
	Vector operator-(const Vector &); //done
	Vector & operator/(int &); //done 
	Vector & operator*(int &); //done
	void Print_Vector (); //done
	double & operator[](int); //done
	void Print_Elem_Vector (int); //done
	Vector & operator=(const Vector &); //done
};

