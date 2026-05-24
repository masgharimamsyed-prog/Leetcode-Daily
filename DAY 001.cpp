int convert(char s) {

    if (s == 'I') {
        return 1;
    }
    else if (s == 'V') {
        return 5;
    }
    else if (s == 'X') {
        return 10;
    }
    else if (s == 'L') {
        return 50;
    }
    else if (s == 'C') {
        return 100;
    }
    else if (s == 'D') {
        return 500;
    }
    else if (s == 'M') {
        return 1000;
    }
    else {
        return 0;
    }

}

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;

        for (int i = 0; i < s.length(); i++) {

            if (i < s.length() - 1 && convert(s[i]) < convert(s[i + 1])) {
                res -= convert(s[i]);
            }
            else {
                res += convert(s[i]);
            }


        }
        return res;
    }
};