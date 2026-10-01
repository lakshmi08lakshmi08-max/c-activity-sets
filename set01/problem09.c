\*WAP to find the distance between two points using pass by reference\*

#include <stdio.h>
#include <math.h>

struct point
{
    float x, y;
};

typedef struct point P;

void input(P *p1, P *p2)
{
    printf("Enter coordinates of Point 1: ");
    scanf("%f%f", &p1->x, &p1->y);

    printf("Enter coordinates of Point 2: ");
    scanf("%f%f", &p2->x, &p2->y);
}

float find_distance(P p1, P p2)
{
    float d;
    d = sqrt((p2.x - p1.x) * (p2.x - p1.x) +
             (p2.y - p1.y) * (p2.y - p1.y));
    return d;
}

void output(P p1, P p2, float d)
{
    printf("The distnce between (%f,%f) and (%f,%f) is %f",
           p1.x, p1.y, p2.x, p2.y, d);
}

int main()
{
    P p1, p2;
    float d;

    input(&p1, &p2);
    d = find_distance(p1, p2);
    output(p1, p2, d);

    return 0;
}