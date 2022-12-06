#include <iostream>
#include <vector>

using namespace std;

int maxnum(vector<int> sides)
{
    if (sides[0] >= sides[1])
        return sides[0];
    else
        return sides[1];
}

int solution(vector<int> sides)
{
    int answer = 0;
    int i = 1;

    int max = maxnum(sides);

    while (i <= max)
    {
        if ((sides[0] + sides[1] - max + i) > max)
            answer++;
        i++;
    }

    while (sides[0] + sides[1] > i)
    {
        answer++;
        i++;
    }
    return answer;
    // }

    int main()
    {
        vector<int> sides;
        sides.push_back(11);
        sides.push_back(7);
        cout << solution(sides) << endl;
        return 1;
    }