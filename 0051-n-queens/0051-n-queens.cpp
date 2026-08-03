class Solution {
public:
    bool issafe(int row,int col,vector<vector<int>>&board)
    {
        for(int i=0; i<=row; i++)
        {
            if(board[i][col]) return false;
        }
        for(int i=row-1,j=col-1; i>=0 && j>=0; i--,j--)
        {
            if(board[i][j]) return false;
        }
        for(int i=row-1,j=col+1; i>=0 && j<board.size(); i--,j++)
        {
            if(board[i][j]) return false;
        }

        return true;
    }
    void solve(int row,vector<vector<int>>&board,vector<vector<string>>&ans)
    {
        if(row==board.size())
        {
            vector<string>myrow;
            string row="";
            for(int i=0;i<board.size();i++)
            {
                row="";
                for(int j=0;j<board.size();j++)
                {
                    if(board[i][j]==1) row+='Q';
                    else row+='.';
                }
                myrow.push_back(row);
            }
            ans.push_back(myrow);
            return;
        }
        for(int col=0; col<board.size(); col++)
        {
            if(issafe(row,col,board))
            {
                board[row][col]=1;
                solve(row+1,board,ans);
            }
            board[row][col]=0;
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<int>>board(n,vector<int>(n));
        vector<vector<string>>ans;
        solve(0,board,ans);
        return ans;
    }
};