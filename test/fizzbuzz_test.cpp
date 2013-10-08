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

TEST(FizzBuzz, TestSay2)
{
  STRCMP_EQUAL("2", fizzBuzz->say(2).c_str()); 
}

TEST(FizzBuzz, TestSayFizz)
{
  STRCMP_EQUAL("Fizz", fizzBuzz->say(3).c_str()); 
}

TEST(FizzBuzz, TestSayBuzz)
{
  STRCMP_EQUAL("Buzz", fizzBuzz->say(5).c_str()); 
}

TEST(FizzBuzz, TestSayFizzBuzz)
{
  STRCMP_EQUAL("FizzBuzz", fizzBuzz->say(15).c_str()); 
}
