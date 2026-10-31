class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        std::unordered_map<char,int> map;
        for(int i =0;i<s.length();i++){
            map[s[i]]++;
        }
        for(int i =0;i<t.length();i++){
            if(!map.contains(t[i])||map[t[i]]==0)return false;
            map[t[i]]--;
            if(map[t[i]]==0) map.erase(t[i]);
        }
        if(map.empty())return true;
        return false;
    }
};