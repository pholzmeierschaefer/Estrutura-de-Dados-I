#include <stdio.h>
#include "exercicio.h"
#include <math.h>
//
Point setPoint(int x, int y){
    Point p;
    p.x = x;
    p.y = y;
    return p;
}
//
Point getPoint(Point p)
{
    return p;
}
//
int getX(Point p)
{
    return p.x;
}
//
int getY(Point p){
    return p.y;
}
//
void printPoint(Point p)
{
    printf("(%d, %d)", p.x, p.y);
}
//
float medir_dist(Point p1, Point p2)
{
    float distancia;
    distancia = pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2);
    distancia = sqrt(distancia);
    return distancia;
}
//
