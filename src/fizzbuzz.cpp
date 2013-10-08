#include <fizzbuzz.h>

FizzBuzz::FizzBuzz(){
  return;
}

std::string FizzBuzz::say(int num){

  if(num%3 == 0) return "Fizz";

  std::ostringstream stream;
  stream << num;
  std::string answer_str = stream.str();
  return answer_str; 
}
