#include "fizzbuzz_with_feature_toggle.h"

namespace {

// The fixture for testing class FizzBuzzWithFeatureToggle.
class FizzBuzzWithFeatureToggleTest : public ::testing::Test {
protected:
    // You can remove any or all of the following functions if its body
    // is empty.

  FizzBuzzHandler *ptrFizzBuzzHandler = NULL;

  FizzBuzzWithFeatureToggleTest() {
      // You can do set-up work for each test here.
      FizzBuzzHandler fizzBuzzHandler;
      ptrFizzBuzzHandler = &fizzBuzzHandler;
  }

  virtual ~FizzBuzzWithFeatureToggleTest() {
      // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
      // Code here will be called immediately after the constructor (right
      // before each test).
  }

  virtual void TearDown() {
      // Code here will be called immediately after each test (right
      // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for FizzBuzzWithFeatureToggle.
};

TEST_F(FizzBuzzWithFeatureToggleTest, When1Then1) {
    EXPECT_EQ("1", ptrFizzBuzzHandler->handle(1));
}

TEST_F(FizzBuzzWithFeatureToggleTest, When3ThenFizz) {
    EXPECT_EQ("Fizz", ptrFizzBuzzHandler->handle(3));
}

TEST_F(FizzBuzzWithFeatureToggleTest, When5ThenBuzz) {
    EXPECT_EQ("Buzz", ptrFizzBuzzHandler->handle(5));
}

TEST_F(FizzBuzzWithFeatureToggleTest, When15ThenFizzBuzz) {
    EXPECT_EQ("FizzBuzz", ptrFizzBuzzHandler->handle(15));
}

}  // namespace


GTEST_API_ int main(int argc, char **argv) {
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
