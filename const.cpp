#include <iostream>
using namespace std;

void main()
{
	const int DAYS_IN_WEEK = 7; // Объявляем константу(переменная, которая не меняется) обозначающая колличество дней в неделе
	cout << DAYS_IN_WEEK << endl; // Проверка. Кстати да, объявляй константу капсом. Так надо
	const char NEW_LINE = '\n'; // Ебать, а так можно было?
	cout << NEW_LINE << DAYS_IN_WEEK << NEW_LINE; // Проверили. Работает.
	const char TAB = '\t'; // И так тоже можно
	cout << TAB << TAB << "Hello"; // Проверка
}
