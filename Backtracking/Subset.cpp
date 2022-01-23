void solve(int n,vector<int> &A,vector<vector<int>> &ans)
{
    vector<int> curr;
    int index=0;
    while(n>0)
    {
        if(n&1)
        {
            curr.push_back(A[index]);
        }
        index++;
        n=n>>1;
    }
    
    ans.push_back(curr);
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    int n=A.size();
    int l=(1<<n)-1;
    vector<vector<int>> ans;
    
    for(int i=0;i<=l;i++)
    {
        solve(i,A,ans);
    }
    for(int i=0;i<ans.size();i++)
    {
        sort(ans[i].begin(),ans[i].end());
    }
    sort(ans.begin(),ans.end());
    
    return ans;
}
