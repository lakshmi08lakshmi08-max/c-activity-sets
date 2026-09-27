\* WAP to find the lenght of a string.

#include <stdio.h>

void input(char s[])
{
    printf("Enter a string");
    scanf("%s",s);
}

int length_of_string(char s[])
{
    int i=0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}

void output(int n, char s[])
{
    printf("The length of %s is %d\n",s,n);
}

int main()
{
    char s[];
    int length;
    input(s);
    length = length_of_string(s);
    output(length,s);
    return 0;
}