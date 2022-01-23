void solve(int index,vector<int> curr,int n,int k,vector<vector<int>> &ans)
{
    if(index==(n+1))
    {
        if(curr.size()==k)
        {
            ans.push_back(curr);
        }
        return;
    }
    curr.push_back(index);
    solve(index+1,curr,n,k,ans);
    curr.pop_back();

    solve(index+1,curr,n,k,ans);
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> curr;
    vector<vector<int>> ans;
    solve(1,curr,A,B,ans);
    return ans;
}
