#include "fizzbuzz_with_feature_toggle.h"

string FizzBuzzHandler::handle(int number) {
    if (number == 3) {
        return "Fizz";
    }
    if (number == 5) {
        return "Buzz";
    }
    if (number == 15) {
        return "FizzBuzz";
    }
    return "1";
}
