\*Write a program to print the bill of a sweet shop.*/
#include <stdio.h>

struct item {
    char n[50];
    float p;
    float w;
    float t;
};

typedef struct item I;

I input()
{
    I i;
    printf("Enter sweet name, price and weight of the item: ");
    scanf("%s%f%f", i.n, &i.p, &i.w);
    return i;
}

void loop(int n, I is[n])
{
    for(int i = 0; i < n; i++)
    {
        is[i] = input();
    }
}

void compute(I *i)
{
    i->t = i->p * i->w;
}

float total(int n, I is[])
{  float g = 0;
    for(int i = 0; i < n; i++)
    {
        compute(&is[i]);
        g += is[i].t;
    }
    return g;
}

void print(I i)
{
    printf("%s %.2f %.2f %.2f\n",
           i.n, i.p, i.w, i.t);
}
void bill(int n, I is[n], float g)
{ printf("\nName Price Weight Total\n");
    for(int i = 0; i < n; i++)
    {
        print(is[i]);
    }
  printf("Grand total = %.2f\n", g);
}
int main()
{  int n;
    printf("No of items: ");
    scanf("%d", &n);
    I is[n];
    loop(n, is);
    float g = total(n, is);
 bill(n, is, g);
    return 0;
}
