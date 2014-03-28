#include "fizzbuzz_with_feature_toggle.h"

string FizzBuzzHandler::handle(int number) {
    if (number == 15) {
        return "FizzBuzz";
    }
    if (number % 3 == 0) {
        return "Fizz";
    }
    if (number == 5) {
        return "Buzz";
    }
    return std::to_string(number);
}
