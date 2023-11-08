// Prokofev 1414.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    if (n <= 0) {
        cout << "Размер массива должен быть положительным числом." << endl;
        return 1;
    }

    int X[1];
    int maxElement = X[0];
    int minElement = X[0];
    int indexOfMax = 0;
    int indexOfMin = 0;

    // Ввод элементов массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> X[i];

        if (X[i] > maxElement) {
            maxElement = X[i];
            indexOfMax = i;
        }

        if (X[i] < minElement) {
            minElement = X[i];
            indexOfMin = i;
        }
    }

    cout << "Максимальный элемент: " << maxElement << " (индекс " << indexOfMax << ")" << endl;
    cout << "Минимальный элемент: " << minElement << " (индекс " << indexOfMin << ")" << endl;

    return 0;
}