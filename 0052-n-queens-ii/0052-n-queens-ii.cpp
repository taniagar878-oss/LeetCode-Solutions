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
    void solve(int row,vector<vector<int>>&board,int &count,int n)
    {
        if(row==n)
        {
            count++;
            return;
        }
        for(int col=0; col<n; col++)
        {
            if(issafe(row,col,board))
            {
                board[row][col]=1;
                solve(row+1,board,count,n);
            }
            board[row][col]=0;
        }
    }
    int totalNQueens(int n) 
    {
        vector<vector<int>>board(n,vector<int>(n));
        int count=0;
        solve(0,board,count,n);
        return count;
    }
};