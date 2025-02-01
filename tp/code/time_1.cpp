#define pb push_back
class Solution {
public:
    int maxFreeTime(int tt, int k, vector<int>& st, vector<int>& et) {
        
      
        st.insert(st.begin(),0);
        et.insert(et.begin(),0);
        st.pb(tt);
        et.pb(tt);
        int n = st.size();
        int sum = 0,ans=0;
        for(int i=1;i<n-1;i++){
            sum+=et[i]-st[i];
            if(i>=k){
                ans=max(ans,st[i+1]-et[i-k]-sum);
                sum-=et[i-k+1]-st[i-k+1];
            }
            // cout<<ans<<endl;
        }
        return ans;
    }
};