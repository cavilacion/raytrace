#include "torus.h"

#include <cmath>

Hit Torus::intersect(Ray const &ray)
{
   Vector OC = (ray.O - C );
   Vector v = ray.D;
		
	 double t, a, b, c;
	 
	a=1.0;
	b=2.0*v.dot(OC);
	c=OC.dot(OC)-r1*r1;
	double D = b*b - 4.0*a*c;
  if (D<0) {
      return Hit::NO_HIT();
  }

	double t0 = (-b - sqrt(D) ) / (2*a);
	double t1 = (-b + sqrt(D) ) / (2*a);
	t = (t0 < t1 && t0 >= 0) ? t0 : t1;
	if (t<=0) {
      return Hit::NO_HIT();
  }         
	Point P = ray.at(t);
  Vector N = (P - C).normalized();
  return Hit(t,N);
}

Torus::Torus(Point const &C, double r1, double r2)
:
	C (C),
	r1 (r1),
	r2 (r2)
{}
