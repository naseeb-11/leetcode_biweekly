#define pb push_back
class Solution {
public:
    int maxFreeTime(int tt, vector<int>& st, vector<int>& et) {
        st.insert(st.begin(),0);
        et.insert(et.begin(),0);
        st.pb(tt);
        et.pb(tt);
        
        int n = st.size();

        int ans=0,maxgap=0;
        for(int i=n-2;i>=1;i--){
            int andarmx = st[i+1]-et[i-1]-(et[i]-st[i]);
            int cursz= et[i]-st[i];
            ans=max(ans,andarmx);
            if(maxgap>=cursz){
                ans=max(ans,andarmx+cursz);
            }
            maxgap=max(maxgap,st[i+1]-et[i]);
        }
        maxgap=0;
        for(int i=1;i<n-1;i++){
            int andarmx = st[i+1]-et[i-1]-(et[i]-st[i]);
            int cursz= et[i]-st[i];
            ans=max(ans,andarmx);
            if(maxgap>=cursz){
                ans=max(ans,andarmx+cursz);
            }
            maxgap=max(maxgap,st[i]-et[i-1]);
        }
        return ans;
    }
};