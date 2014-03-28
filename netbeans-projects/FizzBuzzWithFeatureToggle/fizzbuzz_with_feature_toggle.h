/* 
 * File:   fizzbuzz_with_feature_toggle.h
 * Author: ben
 *
 * Created on March 27, 2014, 4:52 PM
 */

#ifndef FIZZBUZZ_WITH_FEATURE_TOGGLE_H
#define	FIZZBUZZ_WITH_FEATURE_TOGGLE_H

#include "gtest/gtest.h"
#include <string>

using std::string;

class FizzBuzzHandler {
public:
    string handle(int number);
};

class FizzBuzzHandlerProxy : public GameHandler {
public:
    string handle(int number) override;
};
#endif	/* FIZZBUZZ_WITH_FEATURE_TOGGLE_H */

