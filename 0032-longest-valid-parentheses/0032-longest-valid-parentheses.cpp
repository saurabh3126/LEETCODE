class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1);   // base index

        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                stk.push(i);
            } 
            else { // s[i] == ')'
                stk.pop();   // match one '('

                if(stk.empty()){
                    stk.push(i);   // new base
                } 
                else {
                    ans = max(ans, i - stk.top());
                }
            }
        }
        return ans;
    }
};
