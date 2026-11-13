class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        for(int i =0;i<tokens.size();i++){
            if(!(tokens[i]=="+" ||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")){
                int value = stoi(tokens[i]);
                st.push(value);
            }
            else{
                int value1 = st.top();
                st.pop();
                int value2 = st.top();
                st.pop();
                int curr = calculate(value1, value2,tokens[i]);
                st.push(curr);
            }
        }
        return st.top();

    }
    int calculate(int value1,int value2,string op ){
        int final;
        if(op == "+"){
            final = value2+value1;
        }
        else if(op == "-"){
           final = value2-value1;
        }
        else if(op == "*"){
            final = value2*value1;
        }
        else{
            final = value2/value1;
        }
        return final;
    }
};