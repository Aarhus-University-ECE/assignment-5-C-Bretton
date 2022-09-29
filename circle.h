#pragma once
#include <stdbool.h>

// structs what a point is made of
typedef struct point {
	int x;
	int y;
} point;


/*add your definition of circle here. You need top call it "circle"*/
//circle is struct by its point and its radius
typedef struct circle {
	point p;
	int r;

} circle;

//functions that will be run in circle.c
void fiveCircles(circle c[]);
bool circleIsValid(const circle* c);
void translate(circle* c, const point* p);

