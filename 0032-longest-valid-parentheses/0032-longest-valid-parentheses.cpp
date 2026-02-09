class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1);          // boundary marker
        int ans = 0;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '('){
                stk.push(i);
            }
            else {   // s[i] == ')'
                stk.pop();   // try to match one '('

                if(stk.empty()){
                    stk.push(i);   // reset boundary
                }
                else {
                    ans = max(ans, i - stk.top());
                }
            }
        }
        return ans;
    }
};
