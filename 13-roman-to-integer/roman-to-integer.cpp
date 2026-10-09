class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        int unk = 0;
         unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10}, 
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for(int i=0;i<s.size();i++){
            if(i+1<s.size() && roman[s[i]]<roman[s[i+1]]){
                int unk = roman[s[i+1]]- roman[s[i]];
                res+=unk;
                i++;
            }
            else{
                res+=roman[s[i]];
            }
        }
        return res;
    }
};