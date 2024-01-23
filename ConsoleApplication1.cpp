#include <iostream>
#include <Windows.h>
#pragma execution_character_set("utf-8")
#include <cmath>
using namespace std;

int main()
{

	SetConsoleCP(65001); // устанавливаем кодировку входящего потока данных на UTF-8
	SetConsoleOutputCP(65001); // устанавливаем кодировку исходящего потока данных на UTF-8
	while (true)
	{
		float a, b;
		int c, l, d;
		c = 1; 
		l = 1;
		cout << "-------------------------------------------------------------------------------\nВведите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		cout << "Выберите, что вы хотите сделать? \n1. Разделить \n2. Умножить \n3. Сложить \n4. Вычесть \n5. Возвести в степень\n6. Нахождение квадратного корня\n7. Нахождение 1 процента\n8. Факториал\n9. Выйти из программы" << endl;
		cin >> d;
		switch (d){ 
			case 1:
				c = a / b;
				cout << "Итог: " << c << endl;
				break;
			case 2:
				c = a * b;
				cout << "Итог: " << c << endl;
				break;
			case 3:
				c = a + b;
				cout << "Итог: " << c << endl;
				break;
			case 4:
				c = a - b;
				cout << "Итог: " << c << endl;
				break;
			case 5:
				c=pow(a, b);
				cout << "Итог: " << c << endl;
				break;
			case 6:
				cout<< "Квадрат первого числа "<< sqrt(a)<< endl;
				cout << "Квадрат второго числа " << sqrt(b) << endl;
				break;
			case 7:
				cout << "1% от первого числа " << a/100 << endl;
				cout << "1% от второго числа " << b/100 << endl;
				break;
			case 8:
				for (int i = 1; i <= a; i++) {
					c = i * c;				
				}
				cout << "Факториал первого числа "<< c<<endl;
				for (int i = 1; i <= b; i++) {
					l = i * l;
				}
				cout <<"Факториал второго числа "<< l<<endl;
				break;
			case 9:
				cout << "Пока пока\n";
				return 0;
				break;
			default:
				break;
		}
	}
	return 0;
	/*int i;
	int sum = 0;
	SetConsoleCP(1251);
	setlocale(0, "Russian");
	for (i = 1; i <= 1000; i++);
	{
		sum = sum + i;
	}
	cout << "Итог: " << sum << endl;
	return 0;*/
}
