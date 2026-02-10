class Solution {
public:
    bool hasAlternatingBits(long long n) {
        n ^=(n>>1);       
        return (n &(n+1))==0;
    }
};