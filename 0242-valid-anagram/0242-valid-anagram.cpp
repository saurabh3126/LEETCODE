class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        };
        int arrfreq[26]={};
        for(int i=0;i<s.length();i++){
            arrfreq[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            arrfreq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arrfreq[i]!=0){
                return false;
            }
        }
      return true;

    }
};