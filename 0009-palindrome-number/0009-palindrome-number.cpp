class Solution {
public:
    bool isPalindrome(int x) {
        // 1. Convert the number to a string
        // We can now use "string" and "to_string" directly
        string s = to_string(x);
        
        // 2. Create a reversed copy
        string reversed_s = s;
        // We can also use "reverse" directly
        reverse(reversed_s.begin(), reversed_s.end());
        
        // 3. Compare them
        return s == reversed_s;
    }
};