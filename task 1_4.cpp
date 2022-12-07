﻿// task 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

double function1(int x)
{
    double a;

    a = ((9 / 2) * cos(2 * x) - abs(sin(x / 1.1)));

    return a;
}

double function2(int x)
{
    double b;

    b = ((9 / 2) * cos(2 * x) - abs(sin(x / 1.1)));

    return b;
}

int main()
{
    int i = 1, k;
    double a, b, Z;

    double summ1 = 0;
    double summ2 = 0;

    k = i;

    for (int k = i; k <= i + 5; k++)
    {
        a = function1(2);
        summ1 = summ1 + a;
    }

    for (int k = i; k <= i + 8; k++)
    {
        b = function2(2);
        summ2 = summ2 + b;
    }

    Z = pow((summ1 * summ2), (1 / 4));

    cout << "i = " << i << endl;
    cout << "a = " << summ1 << endl;
    cout << "b = " << summ2 << endl;
    cout << "Z = " << Z << endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.