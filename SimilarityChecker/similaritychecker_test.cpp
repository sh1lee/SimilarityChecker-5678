#include "gmock/gmock.h"
#include "similaritychecker.cpp"

class LengthCheckFixture : public testing::Test {
public:
    LengthCheck app;
    int expected = 0;
    int result = 0;
};

TEST_F(LengthCheckFixture, Samelength) {

    result = app.getResult("ASD", "DSA");
    expected = 60;
    EXPECT_EQ(expected, result);
}

TEST_F(LengthCheckFixture, ThrowExceptionS1Is0) {

    EXPECT_THROW(app.getResult(string(""),string("BB")), length_error);
}

TEST_F(LengthCheckFixture, Twicelength1) {

    result = app.getResult("A", "BB");
    EXPECT_EQ(expected, result);
    result = app.getResult("AB", "BBCBE");
    EXPECT_EQ(expected, result);
    result = app.getResult("ABCDEF", "BBC");
    EXPECT_EQ(expected, result);
}
