class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l = *min_element(bloomDay.begin(),bloomDay.end());
        int h = *max_element(bloomDay.begin(),bloomDay.end());
        if(bloomDay.size()<(long long )m*k) return -1;
        while(l<=h){
            int mid = l +(h-l)/2;
            int n = bloomDay.size();
         int count =0;
         int boquet=0;
         for(int i =0; i<n ;i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count==k){
                    boquet++;
                    count =0;
                }
            } 
            else{
                count =0;
            }
         }
         if(boquet <m){
            l =mid+1;
         }
         else{
            h=mid-1;
         }
        }
        return l;
    }
};