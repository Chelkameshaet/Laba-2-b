// prokofev 11;11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

int main() 
{
    setlocale(LC_ALL, "");
    int n;
    std::cout << "Введите количество чисел в последовательности: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Количество чисел должно быть положительным числом." << std::endl;
        return 1;
    }

    int min_element;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Введите число: ";
        std::cin >> num;

        if (i == 0 || num < min_element) {
            min_element = num;
            count = 1;
        }
        else if (num == min_element) {
            count++;
        }
    }

    std::cout << "Минимальное число: " << min_element << std::endl;
    std::cout << "Количество повторений: " << count << std::endl;

    return 0;
}