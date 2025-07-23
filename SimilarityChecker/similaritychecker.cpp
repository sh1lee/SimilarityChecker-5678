
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class LengthCheck {
public:
    int getResult(string str1, string str2) {
        int s1 = (int)str1.size();
        int s2 = (int)str2.size();
        int result = 0;
        int gap = 0;
        if (s1 == 0 || s2 == 0) {
            throw length_error("Must have length");
        }
        if (s1 == s2) return 60;
        if (s1 < s2) {
            gap = s2 - s1;
            result = 1 - (gap / s1);
        }
        else {
            gap = s1 - s2;
            result = 1 - (gap / s2);
        }
        return result;
    }

};
