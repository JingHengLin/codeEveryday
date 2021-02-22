// How to write a hello world program in C language? 
// To learn a programming language, you must start writing programs in it, and this could be your first C program. 
// Let's have a look at the program first.
// Reference : https://www.programmingsimplified.com/

// Method 1
// #include <stdio.h>

// int main()
// {
//     printf("Hello world\n");
//     return 0;
// }

// Method 2 : C hello world using character variables
// #include <stdio.h>

// int main()
// {
//     char a = 'H', b = 'e', c ='l', d = 'o';
//     char e = 'w', f = 'o', g = 'r', h = 'l', i = 'd';
//     printf("%c%c%c%c%c %c%c%c%c%c\n", a,b,c,c,d,e,f,g,h,i);
//     return 0;
// }

// Method 3 : store "hello world" in a string (a character array).
// #include <stdio.h>

// int main()
// {
//     char s1[] = "Hello World";
//     char s2[] = {'H','e','l','l','o',' ','w','o','r','l','d','\0'};
//     printf("%s %s\n", s1, s2);
//     return 0;
// }