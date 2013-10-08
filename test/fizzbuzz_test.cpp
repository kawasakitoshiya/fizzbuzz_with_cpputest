#include "CppUTest/TestHarness.h"
#include <fizzbuzz.h>

TEST_GROUP(FizzBuzz)
{
  FizzBuzz* fizzBuzz;

  void setup()
  {
    fizzBuzz = new FizzBuzz();
  }
  void teardown()
  {
    delete fizzBuzz;
  }
};
TEST(FizzBuzz, TestSay1)
{
  STRCMP_EQUAL("1", fizzBuzz->say(1).c_str()); 
}