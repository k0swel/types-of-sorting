# Виды сортировок массивов

## Сортировка пузырьком.
Представляет собой сортировку, которая осуществляется путём перестановки соседних элементов в порядке возрастания/убывания. Не очень эффективных алгоритм, поэтому его используют лишь в образовательных целях и не рекомендуют использовать в реальных проектах.
Сложность: O(N^2).

![596b722779f8b_Yb6G53y](https://github.com/user-attachments/assets/a91fce78-c3a0-4464-93be-83ca035b1935)

Реализация на C++
```
#define INCREASE > // сортировка по возрастанию
#define DECREASE < // сортировка по убыванию

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
```
