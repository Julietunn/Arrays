#include<iostream>
using namespace std;

//#define DEC_BIN
#define DEC_HEX

void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_BIN
	const int n = 32; 
	bool bin[n] = {}; // bool - потому что двоичная система (делаем перевод в двоичную систему). массив будет хранить разряды двоичного числа 
	int decimal; //десятичное число, которое будем переводить в двоичную сс
	cout << "Введите десятичное число:"; cin >> decimal;
	cout << decimal << "\n";
	int i = 0; //номер разряда
	while (decimal)
	{
		bin[i] = decimal % 2; //получаем младший разряд двоичного числа 
		decimal /= 2; //убираем полученный младший разряд из десятичного числа 
		i++; //переходим к следующему разряду
	}
	//выводим остатки от деления в обратном порядке
	//for (--i; i>= 0;i--) //чтобы убрать все нули 
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0) cout << " ";
		if (i % 4 == 0) cout << " ";
	}
#endif

#ifdef DEC_HEX
	int decimal; //десятичное число, которое будем переводить в двоичную сс
	cout << "Введите десятичное число:"; cin >> decimal;
	cout << decimal << "\n";
	const int  n= 8;
	int hex[n] = {};//массив будет хранить шестнадцатиричное число 
	int i = 0; 
	// получаем разряды шестандцатиричного числа
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
	}
	//выводим разряды в обратном порядке 
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default:cout << hex[i];*/

		if (hex[i] < 10) cout << hex[i];
		else cout << char(hex[i] + 55); //исходя из таблицы ascii
		//(hex[i] < 10) ? cout << hex[i] : cout << char(hex[i]+55);
		//cout << char(hex(hex[i] < 10 ? hex[i]+48 : hex[i] + 55);
		}
	
	cout << endl;
#endif
}