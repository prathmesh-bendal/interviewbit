bool isSafe(vector<string> curr,int r,int c)
{
    int n = curr.size();

    for(int i = 0; i < n; i++) {
        if(curr[r][i] == 'Q') return false;
    }   
    for(int i = 0; i < n; i++) {
        if(curr[i][c] == 'Q') return false;
    }
    int i = r, j = c;

    while(i >= 0 && j >= 0) {
        if(curr[i][j] == 'Q') return false;
        i--, j--;
    }

    i = r, j = c;
    while(i >= 0 && j < n) {
        if(curr[i][j] == 'Q') return false;
        i--, j++;
    }

    return true;
}


void solve(int n,int r,vector<vector<string>> &ans,vector<string> curr)
{
    if(r == n) {
        ans.push_back(curr);
        return;
    }

    for(int i = 0; i < n; i++) {
        if(isSafe(curr, r, i) == true) {
            curr[r][i] = 'Q';
            solve(n, r + 1, ans, curr);
            curr[r][i] = '.';
        }
    }      
}
vector<vector<string> > Solution::solveNQueens(int A) {
    vector<vector<string>> ans; 
    vector<string> curr;    
    for(int i = 0; i < A; i++) {
        string s = "";
        for(int j = 0; j < A; j++) {
        s += ".";
        }
        curr.push_back(s);
    } 

    
    solve(A, 0, ans, curr);
    return ans;
}
