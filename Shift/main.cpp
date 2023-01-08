//Сдвиг массива
#include<iostream>
using namespace std;

//#define SHIFT_LEFT
//#define SHIFT_RIGHT

void main()
{
	setlocale(LC_ALL, "");
#ifdef SHIFT_LEFT
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//вывод исходного массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//циклический сдвиг массива
	int number_of_shifts;
	cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[n - 1] = buffer;
	}

	//вывод сдвинутого массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif

#ifdef SHIFT_RIGHT
	const int size = 10;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
	//массив в изначальном виде
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//сдвиг массива
	int number_of_shifts;
	cout << "Введите количество элементов, на которое нужно сдвинуть массив вправо:"; cin >> number_of_shifts;
	number_of_shifts = size - number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
	}


	//сдвинутый массив
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif
}