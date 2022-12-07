﻿// task 3_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n:=";
    cin >> n;
    if (n < 1) {
        cout << "try again";
    }
    else {
        int array[n][n];
        int k = 0, x, y;

        for (int i = 0; i < n; i++) {
            y = 0;
            x = i;
            while (x >= 0) {
                k++;
                array[x][y] = k;
                y++;
                x--;
            }
        }
        for (int i = 0; i < n; i++) {
            y = i;
            x = n;
            while (y < n) {
                array[x][y] = k;
                k++;
                y++;
                x--;
            }
            k--;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << array[i][j] << " ";
            }
            cout << "\n";
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
