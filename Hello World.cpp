﻿// Hello World.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> // Подключить библиотеку iostream
using namespace std; // Использовать пространство названий std

int main() // Главная функция
{
    cout << "Hello World!" << endl; // cout - вывод в консоль, endl - перенос строки
    setlocale(LC_ALL, "Rus"); // Подключить возможность использовать русский язык
    cout << "Привет Мир!";
}
