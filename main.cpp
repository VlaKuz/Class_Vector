#include "Vector.h"

double * Input_Koord (int Size_Vect)
{
	double *pv;
	pv=new double[Size_Vect];
	for (int i=0;i<Size_Vect;i++)
	{
		pv[i]=rand()%100;
	}
	return pv;
}


void main (void)
{
	setlocale(LC_ALL,"Russian");
	srand(time(NULL));
	int size_1,size_2,k;
	double *znach_koord_vect_1,*znach_koord_vect_2;
	int a,b;
	int c=0;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"ѕример работы программы:"<<endl;
	cout<<endl;

	cout<<"размер 1-ого вектора:";
	size_1=rand()%10;
	cout<<size_1<<endl;
	cout<<"начальный индекс 1-ого вектора:";
	int StartIndex_1=rand()%10;
	cout<<StartIndex_1;
	znach_koord_vect_1=Input_Koord(size_1);
	cout<<endl;

	cout<<"размер 2-ого вектора:";
	size_2=rand()%10;
	cout<<size_2<<endl;
	cout<<"начальный индекс 2-ого вектора:";
	int StartIndex_2=rand()%10;
	cout<<StartIndex_2;
	znach_koord_vect_2=Input_Koord(size_2);
	cout<<endl;


	Vector A(size_1,znach_koord_vect_1,StartIndex_1);
	A.Print_Vector();
	Vector B(size_2,znach_koord_vect_2,StartIndex_2);
	B.Print_Vector();
	cout<<endl;


	Vector COPY_1(size_1,StartIndex_1);
	COPY_1=A;
	Vector COPY_2(size_1,StartIndex_2);
	COPY_2=A;


	cout<<"(1)сумма векторов:"<<endl;
	Vector Res_1(size_1,StartIndex_1);
	Res_1=A+B;
	if (size_1==size_2)
	{
		Res_1.Print_Vector();
	}
	cout<<endl;
	

	cout<<"(2)разность векторов:"<<endl;
	Vector Res_2(size_1,StartIndex_1);
	Res_2=A-B;
	if (size_1==size_2)
	{
		Res_2.Print_Vector();
	}
	cout<<endl;

	cout<<"константа: ";
	a=rand()%10;
	cout<<a;
	

	cout<<endl;
	cout<<"(3)умножение вектора (1) на скал€р:"<<endl;
	Vector Res_3(size_1,StartIndex_1);
	Res_3=A*a;
	Res_3.Print_Vector();
	cout<<endl;

	cout<<"константа: ";
	b=rand()%10;
	cout<<b;
	
	cout<<endl;
	cout<<"(4)деление вектора (1) на скал€р:"<<endl;
	if (b==0)
	{
		cout<<"ќшибка: деление на 0"<<endl;
	}
	else
	{
	Vector Res_4(size_1,0);
	Res_4=COPY_2/b;
	Res_4.Print_Vector();
	}
	cout<<endl;
	
	

	int Gr_1,Gr_2;
	Gr_1=rand()%10;
	Gr_2=size_1+Gr_1;
	cout<<"1-а€ граница:"<<Gr_1<<endl;
	cout<<"2-а€ граница:"<<Gr_2<<endl;
	cout<<"(5)«адание произвольных границ индексов при создании вектора (1):"<<endl;
	Vector Res_5(Gr_1,Gr_2,COPY_1);
	Res_5.Print_Vector();


cout<<"¬ведите номер координаты вектора (1), котора€ будет выведена на экран:"<<endl;
	k=rand()%10;
	int r=k+1;
	cout<<r;
	cout<<endl;
	cout<<"(6)вывод заданного эл-та вектора на экран:"<<endl;
		COPY_1[k]; 
	if ((k>=StartIndex_1) && (k<size_1+StartIndex_1))
		COPY_1.Print_Elem_Vector(k);
	cout<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"“есты:"<<endl;
	cout<<endl;




	cout<<"¬ектор размерности ноль и разные размерности:"<<endl;
	int t_1=0, t_2=5;
	double *mass_t1,*mass_t2;
	mass_t1=Input_Koord(t_1);
	int StartIndexT_1=-5;
	Vector TEST_1(t_1,mass_t1,StartIndexT_1);
	cout<<"¬ектор размерности ноль:"<<endl;
	cout<<"Size="<<t_1<<endl;
	cout<<"»ндекс 1-ого элемента="<<StartIndexT_1<<endl;
	TEST_1.Print_Vector();

	mass_t2=Input_Koord(t_2);
	int StartIndexT_2=-12;
	Vector TEST_2(t_2,mass_t2,StartIndexT_2);
	cout<<"¬ектор другой размерности:"<<endl;
	cout<<"Size 2="<<t_2<<endl;
	cout<<"»ндекс 2-ого элемента="<<StartIndexT_2<<endl;
	cout<<"¬ектор 2:"<<endl;
	TEST_2.Print_Vector();
	cout<<"—умма и разность:"<<endl;
	Vector RESULT_TEST_1(t_2,StartIndexT_2);
	Vector RESULT_TEST_2(t_2,StartIndexT_2);
	cout<<"—умма:"<<endl;
	RESULT_TEST_1=TEST_1+TEST_2;
	if (t_1==t_2)
	{
		RESULT_TEST_1.Print_Vector();
	}
	cout<<endl;
	cout<<"–азность:"<<endl;
	RESULT_TEST_2=TEST_1-TEST_2;
	if (t_1==t_2)
	{
		RESULT_TEST_1.Print_Vector();
	}
	cout<<endl;
	

	cout<<"ƒеление на 0 (дл€ примера берем 2-ой тестовый вектор):"<<endl;
	int s=0;
	if (s==0)
	{
		cout<<"ќшибка: деление на 0"<<endl;
	}
	else
	{
	Vector RESULT_TEST_3(size_1,StartIndex_1);
	RESULT_TEST_3=TEST_2/b;
	RESULT_TEST_3.Print_Vector();
	}
	cout<<endl;



	cout<<"√раницы (дл€ примера берем 2-ой тестовый вектор):"<<endl;
	int Gr_t1,Gr_t2;
	Gr_t1=-8;
	Gr_t2=t_2+Gr_t1;
	cout<<"1-а€ граница:"<<Gr_t1<<endl;
	cout<<"2-а€ граница:"<<Gr_t2<<endl;
	cout<<"–езультат:"<<endl;
	Vector RESULT_TEST_4(Gr_t1,Gr_t2,TEST_2);
	RESULT_TEST_4.Print_Vector();
	cout<<"--------------------------------------------------------------------"<<endl;

	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"“есты (2):"<<endl;
	cout<<endl;

	cout<<"размер 1-ого вектора:";
	int size_tt1=5;
	cout<<size_tt1<<endl;
	cout<<"начальный индекс 1-ого вектора:";
	int StartIndex_tt1=3;
	cout<<StartIndex_tt1;
	double *znach_koord_vect_tt1=Input_Koord(size_tt1);
	cout<<endl;

	cout<<"размер 2-ого вектора:";
	int size_tt2=5;
	cout<<size_tt2<<endl;
	cout<<"начальный индекс 2-ого вектора:";
	int StartIndex_tt2=-3;
	cout<<StartIndex_tt2;
	double *znach_koord_vect_tt2=Input_Koord(size_tt2);
	cout<<endl;


	Vector AT(size_tt1,znach_koord_vect_tt1,StartIndex_tt1);
	AT.Print_Vector();
	Vector BT(size_tt2,znach_koord_vect_tt2,StartIndex_tt2);
	BT.Print_Vector();
	cout<<endl;
	Vector COPYTT_1(size_tt2,StartIndex_tt2);
	COPYTT_1=BT;

	cout<<"сумма векторов (раз-ти одинаковые, границы индексов различны):"<<endl;
	Vector Res_tt1(size_tt1,StartIndex_tt1);
	Res_tt1=AT+BT;
		cout<<endl;
	

	cout<<"разность векторов (раз-ти одинаковые, границы индексов различны):"<<endl;
	Vector Res_tt2(size_tt1,StartIndex_tt1);
	Res_tt2=AT-BT;
	cout<<endl;

	cout<<"деление 1-ого вектора, например, на 3:"<<endl;
	Vector Res_tt3(size_tt1,StartIndex_tt1);
	int pr=3;
	Res_tt3=AT/pr;
	Res_tt3.Print_Vector();

	cout<<"умножение 2-ого вектора, например, на 7:"<<endl;
	Vector Res_tt4(size_tt1,StartIndex_tt1);
	int pr2=7;
	Res_tt4=BT*pr2;
	Res_tt4.Print_Vector();
	
	
	cout<<"вывод на экран элемента 2-ого массива с индексом 0 (стартовый -3):"<<endl;
	int indt=0;
	COPYTT_1[indt];
	COPYTT_1.Print_Elem_Vector(indt);
		cout<<endl;

		
		cout<<"размер 3-его вектора:";
	int size_tt3=7;
	cout<<size_tt3<<endl;
	cout<<"начальный индекс 3-его вектора:";
	int StartIndex_tt3=3;
	cout<<StartIndex_tt3;
	double *znach_koord_vect_tt3=Input_Koord(size_tt3);
	cout<<endl;

	cout<<"размер 4-ого вектора:";
	int size_tt4=7;
	cout<<size_tt4<<endl;
	cout<<"начальный индекс 4-ого вектора:";
	int StartIndex_tt4=3;
	cout<<StartIndex_tt4;
	double *znach_koord_vect_tt4=Input_Koord(size_tt4);
	cout<<endl;


	Vector ATT(size_tt3,znach_koord_vect_tt3,StartIndex_tt3);
	ATT.Print_Vector();
	Vector BTT(size_tt4,znach_koord_vect_tt4,StartIndex_tt4);
	BTT.Print_Vector();
	cout<<endl;

	cout<<"сумма векторов (раз-ти одинаковые, границы индексов одинаковые):"<<endl;
	Vector Res_ttt3(size_tt3,StartIndex_tt3);
	Res_ttt3=ATT+BTT;
		
	Res_ttt3.Print_Vector();
	cout<<endl;
	cout<<"разность векторов (раз-ти одинаковые, границы индексов одинаковые):"<<endl;
	Vector Res_ttt4(size_tt3,StartIndex_tt3);
	Res_ttt4=ATT-BTT;
	Res_ttt4.Print_Vector();
	cout<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	_getch();
}
	