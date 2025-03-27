#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, Add) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, -1), -2);
}

TEST(CalculatorTest, Subtract) {
    Calculator calc;
    EXPECT_EQ(calc.sub(5, 2), 3);
    EXPECT_EQ(calc.sub(0, 10), -10);
}

TEST(CalculatorTest, Multiply) {
    Calculator calc;
    EXPECT_EQ(calc.mul(4, 3), 12);
    EXPECT_EQ(calc.mul(0, 99), 0);
}

TEST(CalculatorTest, Divide) {
    Calculator calc;
    EXPECT_EQ(calc.div(10, 2), 5);
    EXPECT_EQ(calc.div(9, 3), 3);
}

TEST(CalculatorTest, DivideByZero) {
    Calculator calc;
    EXPECT_THROW(calc.div(10, 0), std::invalid_argument);
}