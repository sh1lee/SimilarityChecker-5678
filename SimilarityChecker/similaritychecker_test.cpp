#include "gmock/gmock.h"
#include "similaritychecker.cpp"


TEST(TC, Samelength) {
    LengthCheck app;
    int result = app.getResult("ASD", "DSA");
    int expected = 60;
    EXPECT_EQ(expected, result);
}

