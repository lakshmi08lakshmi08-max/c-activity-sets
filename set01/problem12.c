\*Find the area of the largest of three circles.*/

#include <stdio.h>

struct circle
{
    float radius, area;
};

typedef struct circle C;

C input_circle()
{
   C a;

    printf("Enter radius: ");
    scanf("%f", &a.radius);

    return a;
}

void compute_area(C *a)
{
    a->area = 3.14* a->radius * a->radius;
}

float largest_of_three_circles(C a1, C a2, C a3)
{
    float l;

    if (a1.area > a2.area && a1.area > a3.area)
        l = a1.area;
    else if (a2.area > a3.area)
        l = a2.area;
    else
        l = a3.area;

    return l;
}

void display(C a1, C a2, C a3, float l)
{
    printf("\nCircle 1: radius = %.2f,  area = %.2f\n",
           a1.radius, a1.area);

    printf("Circle 2: radius = %.2f,  area = %.2f\n",
           a2.radius,  a2.area);

    printf("Circle 3: radius = %.2f, area = %.2f\n",
           a3.radius,  a3.area);

    printf("\nLargest area = %.2f\n", l);
}

int main()
{
    C a1, a2, a3;
    float l;

    a1 = input_circle();
    a2 = input_circle();
    a3 = input_circle();

    compute_area(&a1);
    compute_area(&a2);
    compute_area(&a3);

    l = largest_of_three_circles(a1, a2, a3);

    display(a1, a2, a3, l);

    return 0;
}