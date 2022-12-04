#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots)
{
    int x, y = 0;
    x = dots[0][0];
    y = dots[0][1];
    for (int i = 0; i < 4; i++)
    {
        if (x != dots[i][0])
            x = x - dots[i][0];
        if (y != dots[i][1])
            y = y - dots[i][1];
    }
    x = abs(x);
    y = abs(y);

    return x * y
}