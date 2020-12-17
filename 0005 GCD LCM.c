// Reference : https://www.programmingsimplified.com/c/source-code/c-program-find-hcf-and-lcm

// Method 1 :
// #include <stdio.h>
// int main()
// {
//     int x, y;
//     int a, b;
//     int temp;
//     int gcd, lcm;
//     printf("Enter two integers\n");
//     scanf("%d%d", &x, &y);
//     a = x;
//     b = y;
//     while(b!=0){
//         temp = b;
//         b = a%b;
//         a = temp;
//     }
//     gcd = a;
//     lcm = (x*y)/a;

//     printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
//     printf("Least common multiple of %d and %d = %d\n", x, y, lcm);
//     return 0;
// }

// Method 2:
#include <stdio.h>
int gcd(int, int);
int main()
{
    int x, y;
    int gcd_ans;
    int lcm_ans;
    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);
    gcd_ans = gcd(x, y);
    lcm_ans = (x*y)/gcd_ans;
    printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd_ans);
    printf("Least common multiple of %d and %d = %d\n", x, y, lcm_ans);
}
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}