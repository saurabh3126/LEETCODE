class Solution {
public:
    string shortestPalindrome(string s) {
        string rev=s;
        reverse(rev.begin(), rev.end());
        string pattern = s+"#"+rev;
        int n=pattern.size(), len=0, i=1;
        vector<int> lps(n, 0);
        
        while(i<n){
            if(pattern[i]==pattern[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }

        int lpp = lps.back();
        string rem=s.substr(lpp);
        reverse(rem.begin(), rem.end());
        return rem+s;
    }
};