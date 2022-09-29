#include <malloc.h>
#include "circle.h"
#include <stdbool.h>

void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/
	for(int i = 0; i < 5; i++){
		c[i].p.x = i;
		c[i].p.y = i;
		c[i].r = i;	
	}

	return;
}

//function checking if its a circle
bool circleIsValid(const circle* c) {
/*post: answer to exercise 6.c*/
	if(c->r > 0){ //pooints to circles radius and checks if its larger than 0
		return true; //returns true
	}
	else{
		return false; //returns false
	}
}

void translate(circle* c, const point* p) {
/*answer to exercise 6.d */
	c->p.x = c->p.x + p->x; //adds value of the point p.x to the circle x point
	c->p.y = c->p.y + p->y;	//adds value of the point p.y to the circle y point

	return;
}

