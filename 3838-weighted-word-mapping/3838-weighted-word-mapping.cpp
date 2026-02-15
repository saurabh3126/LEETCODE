class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result ="";
        for(string & word:words){
            long long sum =0;
    for(char ch:word){
        sum+=weights[ch-'a'];
    }    
        result += (char)('z'-(sum%26));
    }
    return result;
    }
};