#include "libgeo/circle.h"
#include "libgeo/triangle.h"
#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Figura: \n1.Krug\n2.Treugolnic\n");
    scanf("%d", &n);
    if (n == 1) {
        circle();
    }
    if (n == 2) {
        triangle();
    }
    if ((n != 1) && (n != 2)) {
        printf("ERROR\n");
    }
}
