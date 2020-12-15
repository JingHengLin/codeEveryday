// Reference : https://www.programmingsimplified.com/c/source-code/c-program-check-odd-even


// Method 1 : Odd or even program in C using modulus operator
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("enter an interger:\n");
//     scanf("%d", &num);
//     if(num%2 == 1)
//         printf("Odd\n");
//     else
//         printf("Even\n");
//     return 0;
// }


// Method 2 : find odd or even using bitwise operator
// #include<stdio.h>

// int main()
// {
//     int num;
//     printf("enter an interger:\n");
//     scanf("%d", &num);
//     if(num & 1 == 1)
//         printf("Odd\n");
//     else
//         printf("Even\n");
//     return 0;
// }

// Method 3 : check odd or even without using bitwise or modulus operator
// #include<stdio.h>

// int main()
// {
//     int num;
//     printf("enter an interger:\n");
//     scanf("%d", &num);
//     if((num/2)*2 != num)
//         printf("Odd\n");
//     else
//         printf("Even\n");
//     return 0;
// }

// Method 4 : Even odd program in C using conditional operator
#include<stdio.h>

int main()
{
    int num;
    printf("enter an interger:\n");
    scanf("%d", &num);
    num % 2 == 0 ? printf("Even\n"):printf("Odd\n");
    return 0;
}