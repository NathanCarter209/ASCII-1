#include<stdio.h>
 int main()
 {
    int ch;
    printf("Enter your Character : ");
    ch= getchar();
    if (ch>='a' && ch<='z')
    {
        ch = ch - ('a'-'A');
    }
    else
    {
        ch = ch + ('a'-'A');
    }
    putchar(ch);
    return 0;   
 }