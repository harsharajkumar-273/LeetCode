class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int depth =0;
        for(char c:s){
            if(c == '('){
                depth++;
                ans = max(depth,ans);
            }
            else if(c != '(' && c!=')'){
                continue;
            }
            else{
                depth--;
            }
        }
        return ans;
    }
};