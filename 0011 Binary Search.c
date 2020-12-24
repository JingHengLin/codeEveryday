// Method 1 :
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX_SIZE 101
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
#define COMPARE(x, y) ((x) < (y) ? -1 : ((x) == (y)) ? 0:1)
void sort(int [], int);
int binsearch(int [], int , int , int );
void main(void)
{
    /* Create rand list */
    int n;
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
    for(int i=0;i<n;i++)
    {
        list[i] = rand()%1000;
        printf("%d\n", list[i]);
    }

    /* Sort */
    sort(list, n);

    /* Show Ans of Sort */
    printf("\n Sorted array: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n", list[i]);
    }
    printf("\n");

    /* Search */
    int searchnum;
    int left = 0;
    int right = n;
    int findIndex = 0;
    printf("Enter the number you want to search:");
    scanf("%d", &searchnum);
    findIndex = binsearch(list, searchnum, left, right);
    if(findIndex!=-1)
        printf("index is %d\n", findIndex);
    else
        printf("Didn't find the searchnum\n");
    
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
int binsearch(int list[], int searchnum, int left, int right)
{
    int middle;
    while(left<=right)
    {
        middle = (left+right)/2;
        switch(COMPARE(list[middle], searchnum))
        {
            case -1 : left = middle + 1;
                    break;
            case  0 : return middle;
            case  1 : right = middle - 1;
                    break;
        }
    }
    return -1;
}