class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n =people.size();
        int count =0;
        int left =0;
        int right =n-1;
        
     while (left<=right){
        int sum =people[left]+people[right];
        if(sum>limit){
            count++;
            right--;
        }
       else if(sum==limit){
            count++;
            right--;
            left++;
        }
        else{
            count++;
            right--;
            left++;
        }
     }
     return count;
    }
};