// task 2_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "n= ";
    cin >> n;

    if (n < 1) {
        cout << "try again";
    }
    else {
        double array[n];

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        double a, suma = 0;
        int k = 0, j = 0;
        bool check = false;
        cout << "A:=";
        cin >> a;

        for (int i = 0; i < n; i++) {
            if (array[i] < a) k++;

            if (array[i] < 0) { j = i; check = true; }
        }

        if (check) {
            double temp, temp2;
            for (int i = j + 1; i < n; i++) {
                temp = array[i];
                modf(temp, &temp2);
                suma = suma + temp2;
            }
        }
        cout << "menshe A:=" << k << " suma pisla last<0:=" << suma;

        double max = array[0];

        for (int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }

        double array2[n], diff = max * 0.2;;
        int b = 0;


        for (int i = 0; i < n; i++) {

            if ((array[i] <= (max + diff)) && (array[i] >= (max - diff))) {
                array2[b] = array[i];
                b++;
            }
        }

        for (int i = b - 1; i < n; i++) {
            if ((array[i] >= (max + diff)) || (array[i] <= (max - diff))) {
                array2[b] = array[i];
                b++;
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
