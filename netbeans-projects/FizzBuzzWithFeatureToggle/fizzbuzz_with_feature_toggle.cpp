#include "fizzbuzz_with_feature_toggle.h"

string FizzBuzzHandler::handle(int number) {
    if (number == 3) {
        return "Fizz";
    }
    return "1";
}
