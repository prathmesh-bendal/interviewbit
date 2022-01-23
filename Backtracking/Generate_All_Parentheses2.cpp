void solve(int open,int close,string curr,vector<string> &ans,int n)
{
    if(close==n)
    {
        ans.push_back(curr);
        return;
    }
    if(open<n)
    {
        curr=curr+'(';
        solve(open+1,close,curr,ans,n);
        curr.pop_back();
    }
    if(close<open)
    {
        curr=curr+')';
        solve(open,close+1,curr,ans,n);
        curr.pop_back();
    }

}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> ans;
    string curr="";
    solve(0,0,curr,ans,A);
    return ans;
}
