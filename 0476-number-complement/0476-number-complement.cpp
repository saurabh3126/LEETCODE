class Solution {
public:
    int findComplement(int num) {
        int current =0;
        int res=0;
        while(num>0){
            if((num&1)==0){
                res|=(1<<current);
            }
            num>>=1;
            current++;
        }
        return res;
    }
};