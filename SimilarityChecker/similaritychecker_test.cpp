#include "gmock/gmock.h"
#include "similaritychecker.cpp"


TEST(TC, Samelength) {
    LengthCheck lc;
    int result = lc.check("ASD", "DSA");
    EXPECT_EQ(60, result);
}
