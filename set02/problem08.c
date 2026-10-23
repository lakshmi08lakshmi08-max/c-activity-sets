/*Using pointers find area of a shape*/
#include <stdio.h>
#include <stdlib.h>

struct object {
    int type;
    void *shape;
};

typedef struct object Object;

struct circle {
    int type;
    float radius, area;
};

typedef struct circle Circle;

struct rectangle {
    int type;
    float length, breadth, area;
};

typedef struct rectangle Rectangle;

struct triangle {
    int type;
    float base, altitude, area;
};

typedef struct triangle Triangle;

Object input_shape()
{
    int n;
    Object O;

    printf("Enter shape (0-Circle, 1-Rectangle, 2-Triangle): ");
    scanf("%d", &n);

    if (n == 0) {
        Circle *c = malloc(sizeof(Circle));

        c->type = 0;
        printf("Enter radius: ");
        scanf("%f", &c->radius);

        c->area = 3.14* c->radius * c->radius;

        O.type = 0;
        O.shape = c;
    }
    else if (n == 1) {
        Rectangle *r = malloc(sizeof(Rectangle));

        r->type = 1;
        printf("Enter length and breadth: ");
        scanf("%f%f", &r->length, &r->breadth);

        r->area = r->length * r->breadth;

        O.type = 1;
        O.shape = r;
    }
    else if (n == 2) {
        Triangle *t = malloc(sizeof(Triangle));

        t->type = 2;
        printf("Enter base and altitude: ");
        scanf("%f%f", &t->base, &t->altitude);

        t->area = 0.5 * t->base * t->altitude;

        O.type = 2;
        O.shape = t;
    }
    else {
        O.type = -1;
        O.shape = NULL;
        printf("Invalid shape type\n");
    }

    return O;
}

void output_shape(Object O)
{
    if (O.type == 0) {
        Circle *c = (Circle *)O.shape;
        printf("Circle area = %.2f\n", c->area);
        free(c);
    }
    else if (O.type == 1) {
        Rectangle *r = (Rectangle *)O.shape;
        printf("Rectangle area = %.2f\n", r->area);
        free(r);
    }
    else if (O.type == 2) {
        Triangle *t = (Triangle *)O.shape;
        printf("Triangle area = %.2f\n", t->area);
        free(t);
    }
}

int main()
{
    int n, i;
    Object O;

    printf("Enter number of objects: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nObject %d\n", i + 1);
        O = input_shape();
        output_shape(O);
    }

    return 0;
}
