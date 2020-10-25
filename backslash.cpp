#include <iostream>
using namespace std;

/*
\n - переход на следующую строку
\t - переход на следующий пункт табуляции

\\ - вывод обратной черты
\" - вывод двойной кавычки
\' - вывод соло кавычки
*/

int main()
{
    cout << "Hello, Anon\n"; // переход на одну строчку
    cout << "Hello, Anon\n\n\n"; // Переход на 3 строчки
    cout << "\tHello, \tAno\tn" << endl; // Переход на следующий пункт табуляции трижды
    cout << "\"Hello, Anon\"" << endl; // В кавычках
    cout << "\\Hello, Anon\\" << endl; // В чертах
    cout << "\'Hello, Anon\'" << endl; // В соло кавычках
}

