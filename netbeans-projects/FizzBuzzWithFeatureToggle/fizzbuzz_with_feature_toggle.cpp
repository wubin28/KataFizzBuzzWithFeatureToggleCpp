#include "fizzbuzz_with_feature_toggle.h"

FizzBuzzHandlerProxy::FizzBuzzHandlerProxy(FizzBuzzHandler *ptrFizzBuzzHandler) {
    this->ptrFizzBuzzHandler = ptrFizzBuzzHandler;
}

string FizzBuzzHandlerProxy::handle(int number) {
    if (GameHandler::isBodyMovementFeatureToggleOn) {
        if (number % 15 == 0) {
            return "FizzBuzzAndTouchKnee";
        }
        if (number % 3 == 0) {
            return "FizzAndTouchHead";
        }
        if (number % 5 == 0) {
            return "BuzzAndTouchShoulder";
        }
        return std::to_string(number);
    } else {
        return this->ptrFizzBuzzHandler->handle(number);
    }
}

string FizzBuzzHandler::handle(int number) {
    if (number % 15 == 0) {
        return "FizzBuzz";
    }
    if (number % 3 == 0) {
        return "Fizz";
    }
    if (number % 5 == 0) {
        return "Buzz";
    }
    return std::to_string(number);
}
