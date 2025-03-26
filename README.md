# Алгоритмы
* [Алгоритм Евклида](https://github.com/k0swel/types-of-sorting/blob/algorithms/README.md#%D0%B0%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC-%D0%B5%D0%B2%D0%BA%D0%BB%D0%B8%D0%B4%D0%B0)
## Алгоритм Евклида
Представляет собой эффективный способ нахождения Наибольшего общего делителя двух чисел.

Иллюстрация, демонстрирующая этот алгоритм:

![gcd1_ru](https://github.com/user-attachments/assets/dca2e1b0-0236-46d1-a24f-81e3eb1587e7)

Реализация алгоритма Евклида на C++. (где a - наибольшее число, b - меньшее число):

[_Рекурсивная функция_](https://github.com/k0swel/types-of-sorting/blob/algorithms/algorithm_evklid/evklid_recusive.cpp)
```
int evklid(int a, int b) {
    if (b == 0) return a;
    else evklid(b, a % b);
}
```

[__Обычная функция__](https://github.com/k0swel/types-of-sorting/blob/algorithms/algorithm_evklid/evklid_usual_func.cpp)
```
int evklid(int a, int b) {
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}
```
.
