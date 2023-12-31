#include <stdio.h>
#include <math.h>
#include "point.h"

Point Point_creer(double x, double y) {
    Point p = {x, y};
    return p;
}

void Point_afficher(const Point * p) {
    printf("(%g, %g)", p->x, p->y);
}

double Point_distance(const Point * first, const Point * second) {
    return sqrt(pow(second->x - first->x, 2) + pow(second->y - first->y, 2));
}