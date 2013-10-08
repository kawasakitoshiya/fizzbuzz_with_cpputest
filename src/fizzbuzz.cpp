#include <fizzbuzz.h>

FizzBuzz::FizzBuzz(){
  return;
}

std::string FizzBuzz::say(int num){
  std::ostringstream stream;
  stream << num;
  std::string answer_str = stream.str();
  return answer_str; 
}
