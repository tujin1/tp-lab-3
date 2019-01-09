#include "task1.h"
#include "Circle.h"
#include <math.h>
double calcDelta (){
	Circle earth(6378.1);
	Circle rope(0);
	rope.setFerence(earth.getFerence() + 1);
	double ans = (rope.getRadius() - earth.getRadius());
	return ans;
}double calcCost() {
	Circle pool(3);
	Circle road(pool.getRadius() + 1);
	double ans1 = road.getArea() - pool.getArea();
	double ans2 = road.getFerence;
	double ans = 1000 * ans1 + 2000 * ans2;
	return ans;
}