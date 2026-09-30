\*Write a program to read and print the points of a polygon/*

#include <stdio.h>

struct point
{
    float x, y;
};

typedef struct point P;

struct hexagon
{
    int n;
    P points[1000];
};

typedef struct hexagon H;

H input()
{
    H h;
    h.n;
printf("Enter number of points: ");
scanf("%d", &h.n);

    for (int i = 0; i < h.n; i++)
    {
        printf("Enter the %d Point: " ,(i +1));
        scanf("%f%f", &h.points[i].x, &h.points[i].y);
    }

    return h;
}

void output(H h)
{
    printf("The points in the hexagon\n");

    for (int i = 0; i< h.n; i++)
    {
        printf("(%.2f, %.2f)\n", h.points[i].x, h.points[i].y);
    }
}

int main()
{
    H h;

    h = input();
    output(h);

    return 0;
}