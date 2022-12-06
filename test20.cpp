#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board)
{
    int answer = 0;
    int n = board.size();
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            if (board[x][y] == 1)
            {
                if (x >= 1 & y >= 1)
                {
                    if (board[x - 1][y - 1] == 0)
                        board[x - 1][y - 1] = 2;
                }
                if (x >= 1)
                {
                    if (board[x - 1][y] == 0)
                        board[x - 1][y] = 2;
                }
                if (y >= 1)
                {
                    if (board[x][y - 1] == 0)
                        board[x][y - 1] = 2;
                }
                if (x >= 1 & y <= n - 2)
                {
                    if (board[x - 1][y + 1] == 0)
                        board[x - 1][y + 1] = 2;
                }
                if (x <= n - 2 & y >= 1)
                {
                    if (board[x + 1][y - 1] == 0)
                        board[x + 1][y - 1] = 2;
                }
                if (x <= n - 2)
                {
                    if (board[x + 1][y] == 0)
                        board[x + 1][y] = 2;
                }
                if (y <= n - 2)
                {
                    if (board[x][y + 1] == 0)
                        board[x][y + 1] = 2;
                }
                if (x <= n - 2 & y <= n - 2)
                {
                    if (board[x + 1][y + 1] == 0)
                        board[x + 1][y + 1] = 2;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 0)
                answer++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "answer = " << answer << endl;
    return answer;
}

int main(void)
{
    vector<vector<int>> board = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0}};
    cout << solution(board) << endl;
    return 1;
}