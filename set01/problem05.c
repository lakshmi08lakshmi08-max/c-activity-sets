\*WAP the sum of n different numbers.\*

#include <stdio.h>

int input_size()
{
    int n;
    printf("Enter the number of numbers  wanted to add\n");
    scanf("%d",&n);
    return n;
}

void input_numbers(int n, int a[n])
{
    printf("enter numbers: ");
    for(int i=0;i<n;i++)
    {
        printf("enter number %d:",i);
        scanf("%d",&a[i]);
    }
}

int sum_of_numbers(int n, int a[n])
{
    int s=0;
    for(int i=0;i<n;i++)
 { s = s +a[i]; }
    return s;
}

void output_numbers(int n, int a[n], int s)
{  for(int i=0;i<n-1;i++)
    { printf("%d+",a[i]);
    }
    printf("%d=%d",a[n-1],s);
}


int main()
{
    int n;
    int s;
    n = input_size();
    int a[n];
    input_numbers(n,a);
    s = sum_of_numbers(n,a);
    output_numbers(n,a,s);
    return 0;
}
