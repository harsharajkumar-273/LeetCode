class Solution {
public:
string s;
std::vector<string> result;
    vector<string> generateParenthesis(int n) {
        int open =0;
        int close = 0;
        s.reserve(2*n);
        trace(s,open,close,n);
        return result;

    }
    void trace(string& s,int open,int close, int n){

        if(s.size()==2*n){
            result.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            trace(s,open+1,close,n);
            s.pop_back();
        }
        if(open>close){
            s.push_back(')');
            trace(s,open,close+1,n);
            s.pop_back();
        }
        
    }
};