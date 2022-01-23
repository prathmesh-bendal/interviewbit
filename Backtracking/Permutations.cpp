void solve(int index,vector<int> curr,vector<vector<int>> &ans,vector<int> &arr)
{
    if(index==arr.size())
    {
        ans.push_back(curr);
        return;
    }

    for(int i=0;i<curr.size();i++)
    {
        if(curr[i]==-1)
        {
            curr[i]=arr[index];
            solve(index+1,curr,ans,arr);
            curr[i]=-1;
        }
    }   
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> ans;
    vector<int> curr(A.size(),-1);
    solve(0,curr,ans,A);
    sort(ans.begin(),ans.end());
    return ans;

}
