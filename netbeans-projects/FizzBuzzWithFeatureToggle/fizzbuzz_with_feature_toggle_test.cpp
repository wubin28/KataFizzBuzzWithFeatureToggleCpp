#include "fizzbuzz_with_feature_toggle.h"

namespace {

// The fixture for testing class FizzBuzzWithFeatureToggle.
class FizzBuzzWithFeatureToggleTest : public ::testing::Test {
protected:
    // You can remove any or all of the following functions if its body
    // is empty.

  GameHandler *ptrGameHandler = NULL;

  FizzBuzzWithFeatureToggleTest() {
      // You can do set-up work for each test here.
      FizzBuzzHandler *ptrFizzBuzzHandler = new FizzBuzzHandler;
      ptrGameHandler = new FizzBuzzHandlerProxy(ptrFizzBuzzHandler);
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
    EXPECT_EQ("1", ptrGameHandler->handle(1));
    EXPECT_EQ("2", ptrGameHandler->handle(2));
    EXPECT_EQ("16", ptrGameHandler->handle(16));
}

TEST_F(FizzBuzzWithFeatureToggleTest, WhenMultipleOf3ThenFizz) {
    EXPECT_EQ("Fizz", ptrGameHandler->handle(3));
    EXPECT_EQ("Fizz", ptrGameHandler->handle(99));
}

TEST_F(FizzBuzzWithFeatureToggleTest, WhenMultipleOf5ThenBuzz) {
    EXPECT_EQ("Buzz", ptrGameHandler->handle(5));
    EXPECT_EQ("Buzz", ptrGameHandler->handle(100));
}

TEST_F(FizzBuzzWithFeatureToggleTest, WhenMultipleOf15ThenFizzBuzz) {
    EXPECT_EQ("FizzBuzz", ptrGameHandler->handle(15));
    EXPECT_EQ("FizzBuzz", ptrGameHandler->handle(90));
}

TEST_F(FizzBuzzWithFeatureToggleTest, GivenBodyMovementIsOnWhenMultipleOf3ThenFizzAndTouchHead) {
    EXPECT_EQ("FizzAndTouchHead", ptrGameHandler->handle(3));
    EXPECT_EQ("FizzAndTouchHead", ptrGameHandler->handle(99));
}

}  // namespace


GTEST_API_ int main(int argc, char **argv) {
    printf("Running main() from gtest_main.cc\n");
    if (GameHandler::isBodyMovementFeatureToggleOn) {
        testing::GTEST_FLAG(filter) = "FizzBuzzWithFeatureToggleTest.GivenBodyMovement*";
    } else {
        testing::GTEST_FLAG(filter) = "FizzBuzzWithFeatureToggleTest.When*";
    }
    
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
