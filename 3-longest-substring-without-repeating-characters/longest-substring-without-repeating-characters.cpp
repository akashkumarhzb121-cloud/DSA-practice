class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     if(s.size()==0) return 0;
     map<char,int>mp;
     int ans=1;
     mp[s[0]]=1;
     int i=0;
     int j=0;

     while(j<(s.size()-1)){
        j+=1;

        while(mp[s[j]]==1){
            mp[s[i]]=0;
            i++;
        }
        mp[s[j]]=1;
        ans=max(ans,(j-i+1));
     }
     return ans;
    }
};