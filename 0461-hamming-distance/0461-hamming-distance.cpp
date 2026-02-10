class Solution {
public:
    int hammingDistance(int x, int y) {
       int yt = x^y;
       int count =0;
       while(yt>0){
        if(yt & 1){
            count++;
        }
            yt>>=1;
       }
        return count;
    }
};