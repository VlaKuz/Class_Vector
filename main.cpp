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
	cout<<"������ ������ ���������:"<<endl;
	cout<<endl;

	cout<<"������ 1-��� �������:";
	size_1=rand()%10;
	cout<<size_1<<endl;
	cout<<"��������� ������ 1-��� �������:";
	int StartIndex_1=rand()%10;
	cout<<StartIndex_1;
	znach_koord_vect_1=Input_Koord(size_1);
	cout<<endl;

	cout<<"������ 2-��� �������:";
	size_2=rand()%10;
	cout<<size_2<<endl;
	cout<<"��������� ������ 2-��� �������:";
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


	cout<<"(1)����� ��������:"<<endl;
	Vector Res_1(size_1,StartIndex_1);
	Res_1=A+B;
	if (size_1==size_2)
	{
		Res_1.Print_Vector();
	}
	cout<<endl;
	

	cout<<"(2)�������� ��������:"<<endl;
	Vector Res_2(size_1,StartIndex_1);
	Res_2=A-B;
	if (size_1==size_2)
	{
		Res_2.Print_Vector();
	}
	cout<<endl;

	cout<<"���������: ";
	a=rand()%10;
	cout<<a;
	

	cout<<endl;
	cout<<"(3)��������� ������� (1) �� ������:"<<endl;
	Vector Res_3(size_1,StartIndex_1);
	Res_3=A*a;
	Res_3.Print_Vector();
	cout<<endl;

	cout<<"���������: ";
	b=rand()%10;
	cout<<b;
	
	cout<<endl;
	cout<<"(4)������� ������� (1) �� ������:"<<endl;
	if (b==0)
	{
		cout<<"������: ������� �� 0"<<endl;
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
	cout<<"1-�� �������:"<<Gr_1<<endl;
	cout<<"2-�� �������:"<<Gr_2<<endl;
	cout<<"(5)������� ������������ ������ �������� ��� �������� ������� (1):"<<endl;
	Vector Res_5(Gr_1,Gr_2,COPY_1);
	Res_5.Print_Vector();


cout<<"������� ����� ���������� ������� (1), ������� ����� �������� �� �����:"<<endl;
	k=rand()%10;
	int r=k+1;
	cout<<r;
	cout<<endl;
	cout<<"(6)����� ��������� ��-�� ������� �� �����:"<<endl;
		COPY_1[k]; 
	if ((k>=StartIndex_1) && (k<size_1+StartIndex_1))
		COPY_1.Print_Elem_Vector(k);
	cout<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"�����:"<<endl;
	cout<<endl;




	cout<<"������ ����������� ���� � ������ �����������:"<<endl;
	int t_1=0, t_2=5;
	double *mass_t1,*mass_t2;
	mass_t1=Input_Koord(t_1);
	int StartIndexT_1=-5;
	Vector TEST_1(t_1,mass_t1,StartIndexT_1);
	cout<<"������ ����������� ����:"<<endl;
	cout<<"Size="<<t_1<<endl;
	cout<<"������ 1-��� ��������="<<StartIndexT_1<<endl;
	TEST_1.Print_Vector();

	mass_t2=Input_Koord(t_2);
	int StartIndexT_2=-12;
	Vector TEST_2(t_2,mass_t2,StartIndexT_2);
	cout<<"������ ������ �����������:"<<endl;
	cout<<"Size 2="<<t_2<<endl;
	cout<<"������ 2-��� ��������="<<StartIndexT_2<<endl;
	cout<<"������ 2:"<<endl;
	TEST_2.Print_Vector();
	cout<<"����� � ��������:"<<endl;
	Vector RESULT_TEST_1(t_2,StartIndexT_2);
	Vector RESULT_TEST_2(t_2,StartIndexT_2);
	cout<<"�����:"<<endl;
	RESULT_TEST_1=TEST_1+TEST_2;
	if (t_1==t_2)
	{
		RESULT_TEST_1.Print_Vector();
	}
	cout<<endl;
	cout<<"��������:"<<endl;
	RESULT_TEST_2=TEST_1-TEST_2;
	if (t_1==t_2)
	{
		RESULT_TEST_1.Print_Vector();
	}
	cout<<endl;
	

	cout<<"������� �� 0 (��� ������� ����� 2-�� �������� ������):"<<endl;
	int s=0;
	if (s==0)
	{
		cout<<"������: ������� �� 0"<<endl;
	}
	else
	{
	Vector RESULT_TEST_3(size_1,StartIndex_1);
	RESULT_TEST_3=TEST_2/b;
	RESULT_TEST_3.Print_Vector();
	}
	cout<<endl;



	cout<<"������� (��� ������� ����� 2-�� �������� ������):"<<endl;
	int Gr_t1,Gr_t2;
	Gr_t1=-8;
	Gr_t2=t_2+Gr_t1;
	cout<<"1-�� �������:"<<Gr_t1<<endl;
	cout<<"2-�� �������:"<<Gr_t2<<endl;
	cout<<"���������:"<<endl;
	Vector RESULT_TEST_4(Gr_t1,Gr_t2,TEST_2);
	RESULT_TEST_4.Print_Vector();
	cout<<"--------------------------------------------------------------------"<<endl;

	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"����� (2):"<<endl;
	cout<<endl;

	cout<<"������ 1-��� �������:";
	int size_tt1=5;
	cout<<size_tt1<<endl;
	cout<<"��������� ������ 1-��� �������:";
	int StartIndex_tt1=3;
	cout<<StartIndex_tt1;
	double *znach_koord_vect_tt1=Input_Koord(size_tt1);
	cout<<endl;

	cout<<"������ 2-��� �������:";
	int size_tt2=5;
	cout<<size_tt2<<endl;
	cout<<"��������� ������ 2-��� �������:";
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

	cout<<"����� �������� (���-�� ����������, ������� �������� ��������):"<<endl;
	Vector Res_tt1(size_tt1,StartIndex_tt1);
	Res_tt1=AT+BT;
		cout<<endl;
	

	cout<<"�������� �������� (���-�� ����������, ������� �������� ��������):"<<endl;
	Vector Res_tt2(size_tt1,StartIndex_tt1);
	Res_tt2=AT-BT;
	cout<<endl;

	cout<<"������� 1-��� �������, ��������, �� 3:"<<endl;
	Vector Res_tt3(size_tt1,StartIndex_tt1);
	int pr=3;
	Res_tt3=AT/pr;
	Res_tt3.Print_Vector();

	cout<<"��������� 2-��� �������, ��������, �� 7:"<<endl;
	Vector Res_tt4(size_tt1,StartIndex_tt1);
	int pr2=7;
	Res_tt4=BT*pr2;
	Res_tt4.Print_Vector();
	
	
	cout<<"����� �� ����� �������� 2-��� ������� � �������� 0 (��������� -3):"<<endl;
	int indt=0;
	COPYTT_1[indt];
	COPYTT_1.Print_Elem_Vector(indt);
		cout<<endl;

		
		cout<<"������ 3-��� �������:";
	int size_tt3=7;
	cout<<size_tt3<<endl;
	cout<<"��������� ������ 3-��� �������:";
	int StartIndex_tt3=3;
	cout<<StartIndex_tt3;
	double *znach_koord_vect_tt3=Input_Koord(size_tt3);
	cout<<endl;

	cout<<"������ 4-��� �������:";
	int size_tt4=7;
	cout<<size_tt4<<endl;
	cout<<"��������� ������ 4-��� �������:";
	int StartIndex_tt4=3;
	cout<<StartIndex_tt4;
	double *znach_koord_vect_tt4=Input_Koord(size_tt4);
	cout<<endl;


	Vector ATT(size_tt3,znach_koord_vect_tt3,StartIndex_tt3);
	ATT.Print_Vector();
	Vector BTT(size_tt4,znach_koord_vect_tt4,StartIndex_tt4);
	BTT.Print_Vector();
	cout<<endl;

	cout<<"����� �������� (���-�� ����������, ������� �������� ����������):"<<endl;
	Vector Res_ttt3(size_tt3,StartIndex_tt3);
	Res_ttt3=ATT+BTT;
		
	Res_ttt3.Print_Vector();
	cout<<endl;
	cout<<"�������� �������� (���-�� ����������, ������� �������� ����������):"<<endl;
	Vector Res_ttt4(size_tt3,StartIndex_tt3);
	Res_ttt4=ATT-BTT;
	Res_ttt4.Print_Vector();
	cout<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	_getch();
}
	