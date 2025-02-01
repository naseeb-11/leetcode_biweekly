class Solution {
public:
    string findValidPair(string s) {
        int n = s.length();
        map<int,int> m;


        for(int i=0;i<n;i++)
         m[s[i]]++;
        
      
        for(int i=0;i<n-1;i++){
            if(m[s[i]]==(s[i]-'0') && m[s[i+1]]==(s[i+1]-'0') && s[i]!=s[i+1]){
               return s.substr(i,2);
            }
        }
        return "";
    }
};