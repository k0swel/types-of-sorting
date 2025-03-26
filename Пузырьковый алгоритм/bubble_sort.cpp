// bubble_sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "fill_massiv.h"
#include <windows.h>
#define INCREASE >
#define DECREASE <

void bubble_sort(std::vector<int>& massiv) {
    for (int i = 0; i < massiv.size() - 1; i++) {
        for (int j = 0; j < massiv.size() - 1 - i; j++) {
            if (massiv[j] INCREASE massiv[j + 1]) {
                int temp = massiv[j];
                massiv[j] = massiv[j + 1];
                massiv[j + 1] = temp;
            }
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::vector<int> massiv = create_rand_massiv(10, 1, 1000);
    std::cout << "массив до сортировки: ";
    for (auto el : massiv) {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    bubble_sort(massiv);
    std::cout << "массив после сортировки: ";
    for (auto el : massiv) {
        std::cout << el << " ";
    }
}