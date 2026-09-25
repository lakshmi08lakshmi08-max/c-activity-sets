 //Write a program to add two numbers using four functions
#include <stdio.h>

int input()
{  int n;
    scanf("%d", &n);
  return n;
}
int add(int a, int b)
{  return a + b;
}
void output(int r)
{
  printf("Sum of two numbers = %d", r);
}
int main()
{
    int a, b, s;
    printf("Enter two numbers:");
    a = input();
    b = input();
    s = add(a, b);
    output(s);
    return 0;
}
