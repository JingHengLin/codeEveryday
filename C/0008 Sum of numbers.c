// Method 1: Sum of digits
// #include <stdio.h>
// int main()
// {
//     int n, t, sum = 0, remainder;

//     printf("Enter an integer\n");
//     scanf("%d", &n);

//     t = n;

//     while (t != 0)
//     {
//         remainder = t % 10;
//         sum = sum + remainder;
//         t = t / 10;
//     }

//     printf("Sum of digits of %d = %d\n", n, sum);

//     return 0;
// }

// Method 2:
// #include <stdio.h>
// int main()
// {
//     int n, sum = 0, r;

//     printf("Enter a number\n");

//     for (scanf("%d", &n); n != 0; n = n / 10)
//     {
//         r = n % 10;
//         sum = sum + r;
//     }

//     printf("Sum of digits of a number = %d\n", sum);

//     return 0;
// }

// Method 3:
// #include <stdio.h>

// int main()
// {
//     int c, sum, t;
//     char n[1000];

//     printf("Input an integer\n");
//     scanf("%s", n);

//     sum = c = 0;

//     while (n[c] != '\0')
//     {
//         t = n[c] - '0'; // Converting character to integer
//         sum = sum + t;
//         c++;
//     }

//     printf("Sum of digits of %s = %d\n", n, sum);

//     return 0;
// }

// Method 4:
#include <stdio.h>
int add_digits(int);

int main()
{
    int n, result;

    scanf("%d", &n);

    result = add_digits(n);

    printf("%d\n", result);

    return 0;
}

int add_digits(int n)
{
    if (n == 0) // Base case
        return 0;

    return (n % 10 + add_digits(n / 10));
}