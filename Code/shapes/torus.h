#ifndef TORUS_H_
#define TORUS_H_

#include "../object.h"

class Torus: public Object
{
    public:
        Torus(Point const &C, double r1, double r2);

        virtual Hit intersect(Ray const &ray);

        Point const C;
        
        double const r1, r2;
};

#endif
