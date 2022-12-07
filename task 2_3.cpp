// task 2_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n= ";
    cin >> n;
    if (n < 1) {
        cout << "try again";
    }
    else {
        float array[n];

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        float min = array[0], max = array[0], maxi = 0, mini = 0; //min ta max

        for (int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
                maxi = i;
            }
            if (array[i] < min) {
                min = array[i];
                mini = i;
            }
        }
        float sumaVid = 0, dobutok = 1;

        for (int i = 0; i < n; i++) {
            if (array[i] < 0) sumaVid = sumaVid + array[i];
        }

        int startfrom = 0, endat = 0; //добуток

        if (maxi > mini) { startfrom = mini; endat = maxi; }
        else { startfrom = maxi; endat = mini; }

        for (int i = startfrom + 1; i < endat; i++) {
            dobutok = dobutok * array[i];
        }

        cout << "Сума від’ємних елементів масиву: " << sumaVid << endl;
        cout << "Добуток між мін та макс: " << dobutok;

        //за зростанням
        int temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        cout << '\n' << "Масив: ";
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
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
