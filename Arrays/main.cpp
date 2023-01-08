#include<iostream>
using namespace std;

//#define CLASSWORK
//#define HOMEWORK

void main()
{
	setlocale(LC_ALL, "");

#ifdef CLASSWORK
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };
	arr[3] = 123;
	arr[3] = 123;
	cout << arr[3] << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

#endif

#ifdef HOMEWORK
	const int SIZE = 5;
	int arr[SIZE] = { 5, 2, 5, 8, 5 };
	int counter = 0;//��� ���������� �����������
	int res = 0; //��� ���������� �����������
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++) //���� �������� ��������� �������
		{
			cout << "������� �������� ��������� �������:";
			cin >> arr[i];	
		}
	
	for (int i = 0; i < SIZE; i++) //����� ���� ��������� ��������� ������� �� �����
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = SIZE-1; i >= 0; i--) //����� ��������� � �������� �������
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) //����� ���� ��������� �������
	{
		counter += arr[i];
	
	}
	cout << endl;
	cout << "����� ���� ��������� ������� �����:" << counter << endl;
	res = counter / SIZE; //�������-�������������� ���� ��������� �������
	cout << "�������-�������������� ���� ��������� ������� �����:" << res << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "����������� �������� �������:" << min << endl;
	cout << "������������ �������� �������:" << max << endl;
#endif
}
