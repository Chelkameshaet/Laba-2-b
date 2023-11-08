// Prokofev 14;14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

    // Заполнение массива
    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> X[i];
    }

    int maxElement = X[0];
    int minElement = X[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (X[i] > maxElement) {
            maxElement = X[i];
            maxIndex = i;
        }
        if (X[i] < minElement) {
            minElement = X[i];
            minIndex = i;
        }
    }

    std::cout << "Максимальный элемент: " << maxElement << ", его индекс: " << maxIndex << std::endl;
    std::cout << "Минимальный элемент: " << minElement << ", его индекс: " << minIndex << std::endl;

    return 0;
}