\* WAP to find the distance between two points in coordinate axis \*

#include <stdio.h>
#include <math.h>
struct point {
    float x, y;
};
typedef struct point P;
P input();
P input()
{   P a;
    printf("Enter the coordinates of  x and y: ");
    scanf("%f%f", &a.x, &a.y);
    return a;
}

float distance(P p1, P p2)
{   float d;
    d = sqrt((p1.x - p2.x) * (p1.x - p2.x) +
                    (p1.y - p2.y) * (p1.y - p2.y));
    return d;
}

void output(P p1, P p2, float d)
{  printf("The distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",
           p1.x, p1.y, p2.x, p2.y, d);
}

int main()
{
    P p1, p2;
    p1 = input();
    p2 = input();
    float d = distance(p1, p2);
    output(p1, p2, d);
  return 0;
}