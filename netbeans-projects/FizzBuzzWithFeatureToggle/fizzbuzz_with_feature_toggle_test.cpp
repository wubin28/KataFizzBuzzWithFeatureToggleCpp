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
      ptrFizzBuzzHandler = new FizzBuzzHandler;
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

TEST_F(FizzBuzzWithFeatureToggleTest, WhenCommonNumberThenSayItDirectly) {
    EXPECT_EQ("1", ptrFizzBuzzHandler->handle(1));
    EXPECT_EQ("2", ptrFizzBuzzHandler->handle(2));
    EXPECT_EQ("16", ptrFizzBuzzHandler->handle(16));
}

TEST_F(FizzBuzzWithFeatureToggleTest, WhenMultipleOf3ThenFizz) {
    EXPECT_EQ("Fizz", ptrFizzBuzzHandler->handle(3));
    EXPECT_EQ("Fizz", ptrFizzBuzzHandler->handle(99));
}

TEST_F(FizzBuzzWithFeatureToggleTest, WhenMultipleOf5ThenBuzz) {
    EXPECT_EQ("Buzz", ptrFizzBuzzHandler->handle(5));
    EXPECT_EQ("Buzz", ptrFizzBuzzHandler->handle(100));
}

TEST_F(FizzBuzzWithFeatureToggleTest, WhenMultipleOf15ThenFizzBuzz) {
    EXPECT_EQ("FizzBuzz", ptrFizzBuzzHandler->handle(15));
    EXPECT_EQ("FizzBuzz", ptrFizzBuzzHandler->handle(90));
}

TEST_F(FizzBuzzWithFeatureToggleTest, GivenBodyMovementIsOnWhenMultipleOf3ThenFizzAndTouchHead) {
    EXPECT_EQ("FizzAndTouchHead", ptrFizzBuzzHandler->handle(3));
    EXPECT_EQ("FizzAndTouchHead", ptrFizzBuzzHandler->handle(99));
}

}  // namespace


GTEST_API_ int main(int argc, char **argv) {
  printf("Running main() from gtest_main.cc\n");
  testing::GTEST_FLAG(filter) = "FizzBuzzWithFeatureToggleTest.GivenBodyMovement*";
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
