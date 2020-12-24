// Method 1:
// #include <stdio.h>
// int main()
// {
//     int a[100], n, i, j, position, swap;
//     printf("Enter number of element\n");
//     scanf("%d", &n);
//     printf("Enter %d Number\n", n);
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     for (i = 0; i < n - 1; i++)
//     {
//         position = i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (a[position] > a[j])
//                 position = j;
//         }
//         if (position != i)
//         {
//             swap = a[i];
//             a[i] = a[position];
//             a[position] = swap;
//         }
//     }
//     printf("Sorted Array:\n");
//     for (i = 0; i < n; i++)
//         printf("%d\n", a[i]);
//     return 0;
// }

// Method 2:
// #include <stdio.h>
// void SelSort(int array[], int n);
// int main()
// {
//     int array[100], n, i;
//     printf("Enter number of element\n");
//     scanf("%d", &n);
//     printf("Enter %d Numbers\n", n);
//     for (i = 0; i < n; i++)
//         scanf("%d", &array[i]);
//     SelSort(array, n);
//     return 0;
// }
// void SelSort(int array[], int n)
// {
//     int i, j, position, swap;
//     for (i = 0; i < (n - 1); i++)
//     {
//         position = i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (array[position] > array[j])
//                 position = j;
//         }
//         if (position != i)
//         {
//             swap = array[i];
//             array[i] = array[position];
//             array[position] = swap;
//         }
//     }
//     printf("Sorted Array:\n");
//     for (i = 0; i < n; i++)
//         printf("%d\n", array[i]);
// }

// Method 3:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX_SIZE 101
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
void sort(int [], int);
void main(void)
{
    int i, n;
    int list[MAX_SIZE];
    srand(time(NULL));
    printf("Enter the number of numbers to generate:\n");
    scanf("%d", &n);
    printf("Create %d numbers\n", n);
    if(n<1||n>MAX_SIZE)
    {
        fprintf(stderr, "Improper value of n\n");
        exit(EXIT_FAILURE);
    }
    for(i=0;i<n;i++)
    {
        list[i] = rand()%1000;
        printf("%d\n", list[i]);
    }
    sort(list, n);
    printf("\n Sorted array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n", list[i]);
    }
    printf("\n");
}
void sort(int list[], int n)
{
    int i, j, min, temp;
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j = i+1; j<n; j++)
        {
            if(list[j]<list[min])
                min = j;
        }
        SWAP(list[i], list[min], temp);
    }
}