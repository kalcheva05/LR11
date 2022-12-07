﻿// task 3_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "n= ";
    cin >> n;
    cout << "m= ";
    cin >> m;
    if ((n < 1) || (m < 1)) {
        cout << "try again";
    }
    else {
        int array[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                array[i][j] = ((rand() % 19) - 9);
            }
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << array[i][j] << " ";
            }
            cout << "\n";
        }

        int min = array[0][0], k = 0;
        bool f = true;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                k = 0;
                for (int o = 0; o < n; o++) {
                    for (int z = 0; z < m; z++) {
                        if ((array[i][j] == array[o][z]) && ((i != o) || (j != z))) { k++; }

                        if ((min == array[o][z]) && ((i != o) || (j != z)) && (k > 0)) {
                            f = !f;
                        }
                    }
                }
                if ((array[i][j] < min) && (k == 0)) { min = array[i][j]; }
            }
        }

        if (min == array[0][0]) {
            if (f) {
                cout << "\n" << "min ne povt:=" << min;
            }
            else cout << "\n" << "ne isnyye";
        }
        else { cout << "\n" << "min ne povt:=" << min; }
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