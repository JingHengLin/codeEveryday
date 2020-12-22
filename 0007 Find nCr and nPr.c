// Reference
// Method 1 : C program to find nCr and nPr, remember, nCr = n!/(r!*(n-r)!) and nPr = n!/(n-r)!.
// #include <stdio.h>
// int find_nCr(int, int);
// int find_nPr(int, int);
// int factorial(int);
// int main()
// {
//     int n, r;
//     int nCr = 0, nPr = 0;
//     printf("enter two interger:\n");
//     scanf("%d%d", &n, &r);
//     nCr = find_nCr(n, r);
//     nPr = find_nPr(n, r);
//     printf("nCr:%d\nnPr:%d\n", nCr, nPr);
//     return 0;
// }
// int find_nCr(int n, int r)
// {
//     return factorial(n)/(factorial(r)*factorial(n-r));
// }
// int find_nPr(int n, int r)
// {
//     return factorial(n)/factorial(n-r);
// }
// int factorial(int n)
// {
//     if(n==1)
//         return 1;
//     else
//         return n*factorial(n-1);
// }

// Method 2 : C program to find nCr and nPr, remember, nCr = n!/(r!*(n-r)!) and nPr = n!/(n-r)!.
#include <stdio.h>
int find_nCr(int, int, int *);
int find_nPr(int, int, int *);
int factorial(int);
int main()
{
    int n, r;
    int nCr = 0, nPr = 0;
    printf("enter two interger:\n");
    scanf("%d%d", &n, &r);
    find_nCr(n, r, &nCr);
    find_nPr(n, r, &nPr);
    printf("nCr:%d\nnPr:%d\n", nCr, nPr);
    return 0;
}
int find_nCr(int n, int r, int *pnCr)
{
    *pnCr = factorial(n)/(factorial(r)*factorial(n-r));
}
int find_nPr(int n, int r, int *pnPr)
{
    *pnPr = factorial(n)/factorial(n-r);
}
int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}