// 使用氣泡排序法製作一個將五個整數資料由小到大排序的程式。
// 程式執行時會要求您連續輸入5個整數,每個整數之間以空白來區隔,接著按 Enter-鍵之后即會顯示5個整數排序後的結果。
#include <stdlib.h>
#include <stdio.h>
#define N 5
void bubble_sort();

int main()
{
    int data[N];

    printf("enter %d number as data use space to separate : \n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &data[i]);
    }
    bubble_sort(data);
    printf("---After Bubble Sort---\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}

void bubble_sort(int data[])
{
    int temp;
    for (int i = 0; i < N - 1; i++) //every i time can get a current maximum value
    {
        for (int j = 0; j < N - 1 - i; j++) //so minus i, for already correct value
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
    }
}
