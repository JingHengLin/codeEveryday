// Method 1
// https://www.youtube.com/watch?v=lSn6E5pv7pc&ab_channel=Satish
// https://www.youtube.com/watch?v=rsxT4FfRBaM&t=591s&ab_channel=TheOrganicChemistryTutor
// #include<stdio.h>
// int main()
// {
//     int num, remainder, place = 1, bin = 0;
//     printf("please enter a number\n");
//     scanf("%d", &num);
//     printf("decimal: %d\n", num);
//     while(num)
//     {
//         remainder = num % 2;
//         bin = bin + place * remainder;
//         num = num / 2;
//         place = place * 10;
//     }
//     printf("binary : %d\n", bin);
// }

// Method 2
// https://www.youtube.com/watch?v=BKzB6gdRyIM&ab_channel=edu-corner.in
// https://www.youtube.com/watch?v=27p2Dcc-B5o&t=257s&ab_channel=LogicalProgrammer

// #include <stdio.h>
// int main()
// {
//     int n, c, k;

//     printf("Enter an integer in decimal number system\n");
//     scanf("%d", &n);

//     printf("%d in binary number system is:\n", n);

//     for (c = 31; c >= 0; c--)
//     {
//         k = n >> c;
//         if (k & 1)
//             printf("1");
//         else
//             printf("0");
//     }

//     printf("\n");
//     return 0;
// }

// Method 3-0 : malloc
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     // 用來管理動態記憶體的指標
//     int *dynArr;

//     // 指定空間大小
//     int arrLen = 10;

//     // 取得記憶體空間
//     dynArr = malloc(arrLen * sizeof(int));
//     if (dynArr == NULL)
//     {
//         // 無法取得記憶體空間
//         fprintf(stderr, "Error: unable to allocate required memory\n");
//         return 1;
//     }

//     // 使用動態取得的記憶體空間
//     int i;
//     for (i = 0; i < arrLen; ++i)
//     {
//         dynArr[i] = i;
//         printf("%d ", dynArr[i]);
//     }

//     // 釋放記憶體空間
//     free(dynArr);
//     return 0;
// }

// Method 3-1 : Decimal to binary conversion in C
// #include <stdio.h>
// void DecimalToBinary(int *);
// int main()
// {
//     int n;
//     printf("Enter an integer in decimal number system\n");
//     scanf("%d", &n);
//     DecimalToBinary(&n);
//     return 0;
// }
// void DecimalToBinary(int *pN)
// {
//     int k;
//     for(int i = 31; i>=0; i--)
//     {
//         k = *pN >> i;
//         if (k & 1)
//             printf("1");
//         else
//             printf("0");
//     }
//     printf("\n");
// }

// Method 3-2 : Decimal to binary conversion in C
#include <stdio.h>
#include <stdlib.h>
char *decimal_to_binary(int);

int main()
{
    int n;
    char *p;

    printf("Enter an integer in decimal number system\n");
    scanf("%d", &n);

    p = decimal_to_binary(n);
    printf("Binary string of %d is: %s\n", n, p);

    free(p);

    return 0;
}

char *decimal_to_binary(int n)
{
    int c, d, t;
    char *p;

    t = 0;
    p = (char *)malloc(32 + 1);

    if (p == NULL)
        exit(EXIT_FAILURE);

    for (c = 31; c >= 0; c--)
    {
        d = n >> c;

        if (d & 1)
            *(p + t) = 1 + '0';
        else
            *(p + t) = 0 + '0';

        t++;
    }
    *(p + t) = '\0';

    return p;
}
