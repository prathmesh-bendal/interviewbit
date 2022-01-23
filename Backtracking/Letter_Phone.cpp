void solve(int index,string curr,string s,vector<string> &ans,vector<vector<char>> &pad)
{
    if(index==s.length())
    {
        ans.push_back(curr);
        return;
    }

    int idx=s[index]-'0';
    for(int j=0;j<pad[idx].size();j++)
    {
        curr=curr+pad[idx][j];
        solve(index+1,curr,s,ans,pad);
        curr.pop_back();
    }
}

vector<string> Solution::letterCombinations(string A) {
    vector<vector<char>> pad={{'0'},{'1'},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};

    vector<string> ans;
    string curr="";
    solve(0,curr,A,ans,pad);
    sort(ans.begin(),ans.end());
    return ans;
}
