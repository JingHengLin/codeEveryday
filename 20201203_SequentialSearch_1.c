#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define N 5
int SequentialSearch(int *data, int length, int searchNum);

int main()
{
    int data[N];
    int searchNum;
    int index_find;
    printf("enter %d number as data use space to separate : \n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("enter the number you want to search : ");
    scanf("%d", &searchNum);
    index_find = SequentialSearch(data, N, searchNum);
    printf("---After Sequential Search---\n");
    if (index_find == -1)
        printf("there dont have the number you want\n");
    else
        printf("%d at %d position", data[index_find], index_find + 1);
    return 0;
}

int SequentialSearch(int *data, int length, int searchNum)
{
    if (length == 0)
        return (-1);
    else if (searchNum == data[length - 1])
        return (length - 1);
    else
        return SequentialSearch(data, length - 1, searchNum);
}
