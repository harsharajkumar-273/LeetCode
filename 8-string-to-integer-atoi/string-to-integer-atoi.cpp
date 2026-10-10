class Solution {
public:
    int myAtoi(string s) {
        long long num =0;
        int i =0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        if(s.size()==i)return 0;
        int sign = 1;
        if(s[i] == '+')i++;
        else if(s[i] == '-'){
            sign = -1;
            i++;
        }
        for(char c: s.substr(i)){
            if(c<'0'||c>'9'){
                break ;
            }
            num = num * 10 + (c - '0');
            if(num*sign>INT_MAX)return INT_MAX;
            if(num*sign<INT_MIN)return INT_MIN;
        }
        return num*sign ;

    }
};