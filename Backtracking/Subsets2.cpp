void solve(int index,vector<int> curr,vector<int> &arr,vector<vector<int>> &ans)
{
    ans.push_back(curr);

    for(int i=index;i<arr.size();i++)
    {
        if(i>index && arr[i]==arr[i-1])
        continue;

        curr.push_back(arr[i]);
        solve(i+1,curr,arr,ans);
        curr.pop_back();

        //solve(i+1,curr,arr,ans);
    }
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector<int> curr;
    vector<vector<int>> ans;
    sort(A.begin(),A.end());
    solve(0,curr,A,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
