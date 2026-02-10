class Solution {
public:
    int minBitFlips(int start, int goal) {
       int yt = start^goal;
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