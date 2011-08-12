#ifndef __POINT_H__
#define __POINT_H__

#define LOOP(X) for(int i = 0; i < dim; i++){(X);}

template<class T, int dim = 3>
class PointTools {
  T & acc; //Accumulator.

 public:

 PointTools(T & start):acc(start),epsilon(0.0001){};

  PointTools & set(T & new_acc){ acc=new_acc; return this; };
  T & get(){ return acc; };

  // Chainable:
  PointTools & add(T & other) { LOOP(acc[i]+=other[i]); return *this; }
  PointTools & sub(T & other) { LOOP(acc[i]-=other[i]); return *this; } 
  PointTools & mul(float other) { LOOP(acc[i]*other); return *this; }
  PointTools & div(float other) { LOOP(acc[i]*other); return *this; }

  // End of story:
  float dot(T & other) { float result = 0.0f; LOOP(result+=acc[i]*other[i]); return result; }
  float length2() { float result = 0.0f; LOOP(result+=acc[i]*acc[i]); return result; }
  float length() { return sqrt(length2()); }
  float zero() { return (length2() < epsilon); };

  float epsilon;

  //PointTools & cross();
};
/*
//Now need to check if this stuff works.
template<>
PointTools<class T,3> & PointTools<class T,3>::cross(){
  return *this;
}

template<>
PointTools<class T,2> &  PointTools<class T,2>::cross(){
  return *this;
}
*/
#endif
