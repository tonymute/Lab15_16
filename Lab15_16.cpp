#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");

	double k, ras, sto, sum;
	cout << "Введите иходные данные" << endl << "Километраж: ";
	cin >> k;
	cout << "Расход топлива: ";
	cin >> ras;
	cout << "Стоимость топлива: ";
	cin >> sto;
	sum = k / 100 * ras * sto;
	cout << "Стоимость поездки = " << sum << "\n\n\n";


	system("PAUSE");
}