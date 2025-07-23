#include "gmock/gmock.h"
#include "similaritychecker.cpp"

TEST(TC, Samelength) {
    LengthCheck app;
    int result = app.getResult("ASD", "DSA");
    int expected = 60;
    EXPECT_EQ(expected, result);
}

TEST(TC, DiffLengthS1Short) {
    LengthCheck app;
    int result = app.getResult("A", "BB");
    int expected = 0;
    EXPECT_EQ(expected, result);
}
TEST(TC, ThrowExceptionS1Is0) {
    LengthCheck app;
    EXPECT_THROW(app.getResult(string(""),string("BB")), length_error);
}
