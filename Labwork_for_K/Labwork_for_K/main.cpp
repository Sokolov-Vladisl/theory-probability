#include<iostream>


using namespace std;




int f1(int M,double p)
{
	int res=0;
	for (int i = 0; i < M; i++)
	{
		if (p >= (double)rand() / (RAND_MAX))
		{
			res++;
		}
	}
	return res;
}



int main()
{

	setlocale(LC_ALL, "Russian");

	int M = -1;//���-�� �������� ������� ���������� �� ���������
	double p = -1; // ����������� ������������� ������ ������� ���������� �� ������
	int Num = 0;
	bool work = 1;

	while (work)
	{
		p = -1;
		M = -1;

		while (Num <= 0)
		{
			cout << "����� ���������� �������������: ";
			cin >> Num;
			cout << endl;
		}


		while (M < 0)
		{
			cout << "���-�� �������� �� ��������: ";
			cin >> M;
			cout << endl;
		}

		while (p < 0. || p > 1.)
		{
			cout << "����������� �������������: ";
			cin >> p;
			cout << endl;
		}

		if (M == 0 || p == 0.)
		{
			cout << "    > ����� ���������� ��������: 0" << endl;
			system("pause");
		}
		if (p == 1)
		{
			cout << "    > ����� ���������� ��������: " << M << endl;
			system("pause");
		}

		//------[ for random ]------
		srand(std::time(nullptr));
		//--------------------------

		int Psi = 0;
		int Mat = 0;
		for (int i = 0; i < Num; i++)
		{
			Psi = f1(M, p);

			cout << " [" << i + 1 << "] �����������:" << endl;
			cout << "    > ����� ���������� ��������: " << Psi << endl << endl;
			Mat += Psi;
		}
		Mat = Mat / Num;
		if ((Mat) % 1 >= 0.5) Mat = Mat - Mat % 1 + 1;
		else Mat = Mat - Mat % 1;


		cout << endl << endl << "C������ ����� ���������� ��������: " << Mat << endl<<endl<<endl;

		system("pause");
		system("cls");
	}
	
	



}