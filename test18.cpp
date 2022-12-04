#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board)
{
    int x = 0;
    int y = 0;
    int x_max = board[0] / 2;
    int y_max = board[1] / 2;
    for (string s : keyinput)
    {
        cout << s << endl;
        if (s == "right")
        {
            if (x != x_max)
                x++;
        }
        else if (s == "left")
        {
            if (x != -1 * x_max)
                x--;
        }
        else if (s == "up")
        {
            if (y != y_max)
                y++;
        }
        else if (x != -1 * y_max)
        {
            y--;
        }
        cout << "x = " << x << "y = " << y << endl;
    }
    vector<int> answer;
    answer.push_back(x);
    answer.push_back(y);

    return answer;
}

int main()
{
    vector<string> keyinput = {"down", "down", "down", "down", "down"};
    vector<int> board = {7, 9};
    vector<int> answer = solution(keyinput, board);

    cout << "x = " << answer[0] << "y = " << answer[1] << endl;

    return 1;
}