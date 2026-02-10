class Solution {
public:
    int hammingDistance(int x, int y) {
       int yt = x^y;
       return __builtin_popcount(yt); 
    }
};