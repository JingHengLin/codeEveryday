// Reference : https://www.programmingsimplified.com/c/program/c-program-add-number-digits

// Method 1 : Sum of digits of a number
// Sum of digits C program to calculate the sum of digits of a number,
// we use modulus operator (%) to extract individual digits of a number and keep on adding them.

// #include <stdio.h>

// int main()
// {
//     int num = 0;
//     int temp = 0;
//     int sum = 0;
//     printf("enter an interger:\n");
//     scanf("%d", &num);
//     temp = num;
//     while(temp!=0){
//         sum = sum + temp % 10;
//         temp = temp / 10;
//     }
//     printf("sum = %d\n", sum);
//     return 0;
// }

// Method 2 :  find sum of digits using for loop
// #include <stdio.h>

// int main()
// {
//     int num = 0;
//     int temp = 0;
//     int sum = 0;
//     printf("enter an interger:\n");
//     scanf("%d", &num);
//     temp = num;
//     for(temp; temp!=0; temp = temp / 10){
//         sum = sum + temp % 10;
//     }
//     printf("sum = %d\n", sum);
//     return 0;
// }

// Method 3-1 : Calculate sum of digits in C without modulus operator use for loop
// An advantage of this method is that the input integer can be huge, which we can't store in an int or a long long data type variable.
// #include <stdio.h>

// int main()
// {
//     char num[1000];
//     int sum = 0;
//     printf("enter an interger:\n");
//     scanf("%s", num);

//     for(int i=0; num[i]!='\0'; i++){
//         sum = sum + (num[i]-'0'); // num[i]-'0'  Converting character to integer
//     }
//     printf("sum = %d\n", sum);
//     return 0;
// }

// Method 3-2 : Calculate sum of digits in C without modulus operator use while loop
// An advantage of this method is that the input integer can be huge, which we can't store in an int or a long long data type variable.
// #include <stdio.h>

// int main()
// {
//     char num[1000];
//     int sum = 0;
//     int i = 0;
//     printf("enter an interger:\n");
//     scanf("%s", num);
//     while(num[i]!='\0')
//     {
//         sum = sum + (num[i]-'0');
//         i++;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// Method 4 : C program to find sum of digits of a number using recursion
// #include <stdio.h>
// int add_digits(int);

// int main()
// {
//     int num = 0;
//     int sum = 0;
//     printf("enter an interger:\n");
//     scanf("%d", &num);
//     sum = add_digits(num);
//     printf("%d\n", sum);
//     return 0;
// }

// int add_digits(int num)
// {
//     if(num==0) return 0;
//     else return (num%10+add_digits(num/10));
// }
