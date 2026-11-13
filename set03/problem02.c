
#include <stdio.h>

void input(int n, int a[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter next number: ");
        scanf("%d", &a[i]);
    }
}

int check_row(int n, int a[n])
{
    for(int i = 1; i <= n; i++)
    {
        int found = 0;

        for(int j = 0; j < n; j++)
        {
            if(a[j] == i)
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int a[9];

    input(9, a);

    if(check_row(9, a))
    {
        printf("Row is fine\n");
    }
    else
    {
        printf("Row is not fine\n");
    }

    return 0;
}
