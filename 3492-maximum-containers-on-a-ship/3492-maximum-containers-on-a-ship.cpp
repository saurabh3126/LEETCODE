class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int cell=n*n;
        int weight=cell*w;
        
        if(weight<=maxWeight)
        {
           return(cell); 
        }
       return maxWeight / w;
    }
};