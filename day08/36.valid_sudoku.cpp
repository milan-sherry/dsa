class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, vector<vector<int>>> hash1;
        for (int i = '1'; i <= '9'; i++) {
            hash1[i] = vector<vector<int>>(3, vector<int>(9,0));
        }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {    int r=i;
                    int c=j;
                    r=r/3;
                    c=c/3;
                    int index;
                    if(c==0)
                    {
                            index=r;
                    } 
                    else if(c==1)
                    {
                            index=r+3;
                    }
                    else if(c==2)
                    {
                            index=r+6;
                        }
                    if(hash1[board[i][j]][2][index]==1||hash1[board[i][j]][1][i]==1||hash1[board[i][j]][0][j]==1)
                    {
                        return false;
                    }
                    hash1[board[i][j]][2][index]=1;
                    hash1[board[i][j]][1][i]=1;
                    hash1[board[i][j]][0][j]=1;
                }
            }

        }
        return true;
        
    }
};
