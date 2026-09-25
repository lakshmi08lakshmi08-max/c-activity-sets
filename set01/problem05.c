#include <stdio.h>

int input_size()
{
    int n;
    printf("Enter the array size\n");
    scanf("%d",&n);
    return n;
}

void input_numbers(int n, int a[n])
{
    printf("enter numbers:");
    for(int i=0;i<n;i++)
    {
        printf("enter number %d:",i);
        scanf("%d",&a[i]);
    }
}
