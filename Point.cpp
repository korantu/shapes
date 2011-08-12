#include "Point.h"
#include "SelfTest.h"

class PointTest: public SelfTest {
public:
  PointTest(): SelfTest("PointTest"){
    float a[3] = {1,2,3};
    float b[3] = {1,2,3};
    float c[3] = {2,4,6};

    typedef PointTools<float[3],3> point;

    point p(a);
    p.add(b).sub(c);

    validate(false, "Let's go.");
    //   validate(p.zero(), "Should be zero");

  }
}hi;
