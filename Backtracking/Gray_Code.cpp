vector<int> Solution::grayCode(int A) {
    vector<int> ans;
    ans.push_back(0);
    if(A==0)
    return ans;

    ans.push_back(1);

    int l=pow(2,A);
    int curr=2;
    while(ans.size()<l)
    {
        vector<int> temp;
        for(int i=ans.size()-1;i>=0;i--)
        {
            temp.push_back(ans[i]+curr);
        }
        for(int i=0;i<temp.size();i++)
        {
            ans.push_back(temp[i]);
        }
        curr=curr*2;

    }
    return ans;

}
