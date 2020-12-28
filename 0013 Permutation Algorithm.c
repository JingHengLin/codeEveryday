
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
void perm(char *, int , int );
int main() 
{ 
    char list[] = "ABC"; 
    int n = strlen(list); 
    perm(list, 0, n - 1); 
    return 0; 
} 

void perm(char *list, int i, int n)
{   /* create all possible permutation from list[i] to list[n] */
    int temp;
    if(i == n)
    {
        for(int j = 0; j<=n; j++)
        {
            printf("%c", list[j]);
        }
        printf("\n");   
    }
    else
    { /* once there is more than one way to permute the list, create it by recursive */
        for(int j = i; j<=n; j++)
        {
            SWAP(list[i], list[j], temp);
            perm(list, i+1, n);
            SWAP(list[i], list[j], temp);
        }
    }
    
}