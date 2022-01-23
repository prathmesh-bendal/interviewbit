bool isPalindrom(string &s)
{
    int i=0,j=s.length()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        return false;

        i++;
        j--;
    }
    return true;
}

void solve(int index,vector<string> curr,vector<vector<string>> &ans,string &s)
{
    if(index==s.length())
    {
        ans.push_back(curr);
        return;
    }
    string str="";
    for(int i=index;i<s.length();i++)
    {
        str=str+s[i];
        if(isPalindrom(str))
        {
            curr.push_back(str);
            solve(i+1,curr,ans,s);
            curr.pop_back();
        }
    }
}
vector<vector<string> > Solution::partition(string A) {
    vector<vector<string>> ans;
    vector<string> curr;

    solve(0,curr,ans,A);
    return ans;
}
