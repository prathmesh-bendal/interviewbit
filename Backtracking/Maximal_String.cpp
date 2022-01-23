/*
for each of index  find maximum character to its right and swap it with curr index and update final ans
*/

void solve1(string &ans, string s,int k,int index)
{
    if(k==0)
    return;

    char maxc=s[index];
    for(int i=index+1;i<s.length();i++)
    {
        maxc=max(maxc,s[i]);
    }
    if(maxc!=s[index])
    {
        k--;
    }

    for(int i=index+1;i<s.length();i++)
    {
        if(s[i]==maxc)
        {
            swap(s[index],s[i]);
            if(s.compare(ans)>0)
            {
                ans=s;
            }
            solve1(ans,s,k,index+1);
            swap(s[index],s[i]);
        }
    }
}
string Solution::solve(string A, int B) {
    string ans=A;
    solve1(ans,A,B,0);
    return ans;
}
