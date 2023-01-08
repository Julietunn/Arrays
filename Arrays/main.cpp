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
	int counter = 0;//для нахождения результатов
	int res = 0; //для нахождения результатов
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++) //ввод значений элементов массива
		{
			cout << "Введите значения элементов массива:";
			cin >> arr[i];	
		}
	
	for (int i = 0; i < SIZE; i++) //вывод всех введенных элементов массива на экран
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = SIZE-1; i >= 0; i--) //вывод элементов в обратную сторону
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) //сумма всех элементов массива
	{
		counter += arr[i];
	
	}
	cout << endl;
	cout << "Сумма всех элементов массива равна:" << counter << endl;
	res = counter / SIZE; //среднее-арифметическое всех элементов массива
	cout << "Среднее-арифметическое всех элементов массива равно:" << res << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Минимальное значение массива:" << min << endl;
	cout << "Максимальное значение массива:" << max << endl;
#endif
}
