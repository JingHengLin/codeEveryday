// Reference : https://www.programmingsimplified.com/c-program-find-factorial

// Method 1: Factorial in C using a for loop
// #include <stdio.h>
// int main()
// {
//     int num = 0;
//     int f = 1;
//     printf("Enter a number to calculate its factorial\n");
//     scanf("%d", &num);

//     for(int i=1; i<=num; i++)
//     {
//         f = f * i;
//     }
//     printf("%d\n", f);
// }

// Method 2: Factorial in C using a for loop in function
// #include <stdio.h>
// int factorial(int);
// int main()
// {   
//     int num = 0;
//     int f = 0;
//     printf("Enter a number to calculate its factorial\n");
//     scanf("%d", &num);
//     f = factorial(num);
//     printf("%d\n", f);
// }
// int factorial(int num)
// {
//     int f = 1;
//     for(int i = 1; i<=num; i++){
//         f = f * i;
//     }
//     return f;
// }

// Method 3: Factorial program in C using recursion
// #include<stdio.h>
// int factorial(int);
// int main()
// {
//     int num = 0;
//     int f = 0;
//     printf("Enter a number to calculate its factorial\n");
//     scanf("%d", &num);
//     if(num>0)
//         f = factorial(num);
//     printf("%d\n", f);
// }
// int factorial(int num)
// {
//     if(num==1)
//         return 1;
//     else
//         return num*factorial(num-1);
// }