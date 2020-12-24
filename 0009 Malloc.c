// Method 1:
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *str;

//     /* Initial memory allocation */
//     str = (char *)malloc(sizeof(char));
//     strcpy(str, "abcd");
//     printf("String = %s,  Address = %p\n", str, str);

//     free(str);

//     return (0);
// }

// Method 2:
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *pi;
//     float *pf;

//     pi = (int *)malloc(sizeof(int));
//     pf = (float *)malloc(sizeof(float));
//     *pi = 1024;
//     *pf = 3.14;
//     printf("an interger = %d, a float = %f\n", *pi, *pf);

//     free(pi);
//     free(pf);
// }

// Method 3:
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *pi;
//     float *pf;

//     if((pi = (int *)malloc(sizeof(int)))==NULL || (pf = (float *)malloc(sizeof(float)))==NULL)
//     {
//         fprintf(stderr, "Insufficient memory");
//         exit(EXIT_FAILURE);
//     }
//     *pi = 1024;
//     *pf = 3.14;
//     printf("an interger = %d, a float = %f\n", *pi, *pf);

//     free(pi);
//     free(pf);
// }

// Method 4:
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *pi;
//     float *pf;

//     if(!(pi = (int *)malloc(sizeof(int))) || !(pf = (float *)malloc(sizeof(float))))
//     {
//         fprintf(stderr, "Insufficient memory");
//         exit(EXIT_FAILURE);
//     }
//     *pi = 1024;
//     *pf = 3.14;
//     printf("an interger = %d, a float = %f\n", *pi, *pf);

//     free(pi);
//     free(pf);
// }

// Method 4:
// #include <stdio.h>
// #include <stdlib.h>
// #define MALLOC(p, s) \
//     if(!((p) = malloc(s))) \
//     { \
//         fprintf(stderr, "Insufficient memory"); \
//         exit(EXIT_FAILURE); \
//     }

// int main()
// {
//     int *pi;
//     float *pf;

//     MALLOC(pi, sizeof(int));
//     MALLOC(pf, sizeof(float));
//     *pi = 1024;
//     *pf = 3.14;
//     printf("an interger = %d, a float = %f\n", *pi, *pf);

//     free(pi);
//     free(pf);
// }