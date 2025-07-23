
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class LengthCheck {
public:
    int getResult(string str1, string str2) {
        int s1 = (int)str1.length();
        int s2 = (int)str2.length();

        if (isZero(s1, s2)) {
            throw length_error("Must have length");
        }
        if (isSame(s1, s2)) return 60;
        if (isDoubleLength(s1, s2)) return 0;
        int A = max(s1, s2);
        int B = min(s1, s2);
        return getPartialPoint(A, B);
    }

    bool isDoubleLength(int a, int b)
    {
        return (a >= b * 2) || (a * 2 <= b);
    }

    bool isSame(int a, int b)
    {
        return a == b;
    }

    bool isZero(int s1, int s2)
    {
        return s1 == 0 || s2 == 0;
    }

    int getPartialPoint(int A, int B)
    {
        if (A == 7) {
            int a=0;
        }
        int gap = A - B;
        return (60 - (60*gap) / B);
    }

};
