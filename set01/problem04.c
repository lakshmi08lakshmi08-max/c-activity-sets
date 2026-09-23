
\\Write a program to find the largest of three numbers using 4 functions

#include <stdio.h>
int input()
{ int n;
    scanf("%d", &n);
    return n;
}
int largest(int a, int b, int c)
{ if (a > b && a > c)
      return a;
    else if (b > c)
        return b;
    else
        return c;
}
void output(int r)
{ printf("Largest number = %d", r);
}
int main()
{  int a, b, c, r;

 printf("Enter three numbers: ");
    a = input();
    b = input();
    c = input();
    r = largest(a, b, c);
    output(r) ;
return 0;
}
