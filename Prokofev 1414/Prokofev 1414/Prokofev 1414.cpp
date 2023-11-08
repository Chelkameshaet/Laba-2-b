// Prokofev 1414.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() 
{
    setlocale(LC_ALL, "");
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Размер массива должен быть положительным числом." << std::endl;
        return 1;
    }

    int X[1];
    int maxElement = X[0];
    int minElement = X[0];
    int indexOfMax = 0;
    int indexOfMin = 0;

    // Ввод элементов массива
    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> X[i];

        if (X[i] > maxElement) {
            maxElement = X[i];
            indexOfMax = i;
        }

        if (X[i] < minElement) {
            minElement = X[i];
            indexOfMin = i;
        }
    }

    std::cout << "Максимальный элемент: " << maxElement << " (индекс " << indexOfMax << ")" << std::endl;
    std::cout << "Минимальный элемент: " << minElement << " (индекс " << indexOfMin << ")" << std::endl;

    return 0;
}