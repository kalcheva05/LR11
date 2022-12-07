﻿// task2_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    if (n < 1) {
        cout << "try again";
    }
    else {
        int array[n];

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }


        int min = abs(array[0]), k = 0;
        bool first = true;
        for (int i = 0; i < n; i++) {
            if (abs(array[i]) < min) {
                min = array[i];
            }
            if (array[i] == 0 && first) {
                k = i;
                first = !first;
            }
        }

        int suma = 0;
        if (!first) {
            for (int i = k; i < n; i++) {
                suma = suma + abs(array[i]);
            }
        }
        cout << "min:=" << min << "; suma after first 0:=" << suma;
        int array2[n], b = 0, a = n / 2;
        if (n % 2 == 1) { a++; } //для непарних

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                array2[b] = array[i];
                b++;
            }
            else {
                array2[a] = array[i];
                a++;
            }
        }

        cout << '\n' << "Масив: ";
        for (int i = 0; i < n; i++) {
            cout << array2[i] << " ";
        }
    }
    return 0;
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