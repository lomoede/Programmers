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
                board[x - 1][y - 1]
            }
        }
    }
    return answer;
}

int main(void)
{
    return 1;
}