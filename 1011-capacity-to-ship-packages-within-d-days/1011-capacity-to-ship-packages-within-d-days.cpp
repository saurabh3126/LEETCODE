class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int h =0  ;
        for(int i=0;i<weights.size();i++){
            h+= weights[i];
        } 
        while(l<=h){
            int mid(l+(h-l)/2);
            int ndays =1;
            int currentwt=0;
            for(int wt:weights){
                if(currentwt+wt>mid){
                    ndays++;
                    currentwt=wt;
                }
                else{
                    currentwt+=wt;
                }
            }
           
            if(ndays>days){
               l = mid+1;
            }
            else {
                h = mid-1;
            }
            
        }
        return  l;
        
    }
};