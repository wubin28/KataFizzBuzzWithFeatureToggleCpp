#include "fizzbuzz_with_feature_toggle.h"

namespace {

// The fixture for testing class FizzBuzzWithFeatureToggle.
class FizzBuzzWithFeatureToggleTest : public ::testing::Test {
protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  FizzBuzzWithFeatureToggleTest() {
    // You can do set-up work for each test here.
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

TEST_F(FizzBuzz, When1Then1) {
  FizzBuzzHandler fizzBuzzHandler;
  EXPECT_EQ("1", fizzBuzzHandler.handle(1));
}

}  // namespace


GTEST_API_ int main(int argc, char **argv) {
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
