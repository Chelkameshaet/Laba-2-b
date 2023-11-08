// Prokofev zae.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main();
const int n = 10; 
int X[n] = { 1, 5, 3, 8, 2, 7, 6, 4, 9, 0 }; 

int max_element = X[0];
int min_element = X[0];
int max_index = 0;
int min_index = 0;

for (int i = 1; i < n; ++i) {
    if (X[i] > max_element) {
        max_element = X[i];
        max_index = i;
    }

    if (X[i] < min_element) {
        min_element = X[i];
        min_index = i;
    }
}

cout << "Максимальный элемент: " << max_element << ", его индекс: " << max_index << endl;
cout; << "Минимальный элемент: " << min_element << ", его индекс: " << min_index << endl;

return 0;
}