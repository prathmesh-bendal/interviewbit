void solve(int index,int currsum,vector<int> &arr,vector<int> curr,vector<vector<int>> &ans,int target)
{
    if(currsum==target)
    {
        ans.push_back(curr);
        return;
    }

    for(int i=index;i<arr.size();i++)
    {
        if(i>index && arr[i]==arr[i-1])
        continue;

        if(currsum+arr[i]<=target)
        {
            curr.push_back(arr[i]);
            solve(i+1,currsum+arr[i],arr,curr,ans,target);
            curr.pop_back();
        }
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> ans;
    vector<int> curr;
    sort(A.begin(),A.end());
    int currsum=0;
    solve(0,currsum,A,curr,ans,B);
    return ans;
}
