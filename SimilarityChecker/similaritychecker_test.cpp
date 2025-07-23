#include "gmock/gmock.h"
#include "similaritychecker.cpp"

class LengthCheckFixture : public testing::Test {
public:
    LengthCheck app;

    void diagLength(int expectedPoint, string input1, string input2) {
        int actual = app.getResult(input1, input2);
        EXPECT_EQ(expectedPoint, actual);
    }
};

TEST_F(LengthCheckFixture, Samelength) {

    diagLength(60, "ASD", "DSA");

}

TEST_F(LengthCheckFixture, ThrowExceptionS1Is0) {

    EXPECT_THROW(app.getResult(string(""),string("BB")), length_error);
}

TEST_F(LengthCheckFixture, Twicelength1) {

    diagLength(0,"A", "BB");
    diagLength(0,"AB", "BBCBE");
    diagLength(0,"ABCDEF", "BBC");
}

TEST_F(LengthCheckFixture, PartialPoint) {

    diagLength(15, "ADFE", "BCDEFAB");
    diagLength(20, "ABD", "BWCBE");

}