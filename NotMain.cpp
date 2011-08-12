#include "Point.h"
// Empty main.
int main(){ 

   float a[3] = {1,2,3};
    float b[3] = {1,2,3};
    float c[3] = {2,4,6};

    typedef PointTools<float[3],3> point;

    point p(a);
    p.add(b).sub(c);

return 0; }
