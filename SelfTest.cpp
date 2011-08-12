#include <iostream>

#include "SelfTest.h"

class SelfSelfTest: public SelfTest {
public: 
  SelfSelfTest(): SelfTest("meself."){
    validate(false, "reporting failure.");
    validate(true, "Not reporting");
    validate(false, "one more report.");
  }
} test;

SelfTest::SelfTest(string name): self_test_name(name) {
  cout << "Testing " + name + "\n";
}

void SelfTest::validate(bool condition, string reason){
  if(!condition)report(reason);
}

void SelfTest::report(string reason){
  cout << "Failed :" << reason << "\n";
}


