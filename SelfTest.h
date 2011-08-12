#ifndef __SELFTEST_H__
#define __SELFTEST_H__

#include <string>

using namespace std;

class SelfTest {
  string self_test_name;

 public:
  SelfTest(string x);
  void validate(bool condition, string reason);
  void report(string reasaon);
};

#endif //__SELFTEST_H__
