/*WAP to print gcd of two numbers*/

#include <stdio.h>

struct fraction {
    int n, d;
};

typedef struct fraction F;

F input()
{
    F f;
    printf("Enter two numbers: ");
    scanf("%d%d", &f.n, &f.d);
    return f;
}

int gcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

void output(F f, int r)
{
    printf("GCD of %d and %d is %d\n",
           f.n, f.d, r);
}

int main()
{
    F f;
    int r;

    f = input();
    r = gcd(f.n, f.d);

    output(f, r);

    return 0;
}
