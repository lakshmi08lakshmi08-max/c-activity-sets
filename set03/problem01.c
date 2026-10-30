#include <stdio.h>

int input()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    return n;
}

int count_bits(int n)
{
    int count = 0;

    for(int i = 0; i < sizeof(n)*8; i++)
    {
        if((n & 0x1) == 0x1)
        {
            count++;
        }

        n >>= 1;
    }

    return count;
}

void output(int n, int count)
{
    printf("The number of set bits in %d is %d\n", n, count);
}

int main()
{
    int n;
    n = input();

    int count = count_bits(n);

    output(n, count);

    return 0;
}