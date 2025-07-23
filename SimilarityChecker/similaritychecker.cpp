#include <iostream>
#include <string>
using std::string;

class LengthCheck {
public:
    int check(string s1, string s2) {
        if (s1.size() == s2.size()) {
            return 60;
        }
        return 0;
    }

};