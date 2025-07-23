#include <iostream>
#include <string>
using std::string;

class LengthCheck {
public:
    int getResult(string str1, string str2) {
        int s1 = (int)str1.size();
        int s2 = (int)str2.size();
        if (s1 == s2) {
            return 60;
        }
 
    }

};
