bool isSafe(vector<vector<char> > &arr,int r,int c,char ch)
{
    for(int i=0;i<9;i++)
    {
        if(arr[i][c]==ch)
        return false;

        if(arr[r][i]==ch)
        return false;
    }
    int x=(r/3)*3;
    int y=(c/3)*3;
    for(int i=x;i<x+3;i++)
    {
        for(int j=y;j<y+3;j++)
        {
            if(arr[i][j]==ch)
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<char> > &arr)
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(arr[i][j]=='.')
            {
                for(char c='1';c<='9';c++)
                {
                    if(isSafe(arr,i,j,c))
                    {
                        arr[i][j]=c;

                        if(solve(arr))
                        return true;
                        else
                        arr[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void Solution::solveSudoku(vector<vector<char> > &A) {
    solve(A);
}
