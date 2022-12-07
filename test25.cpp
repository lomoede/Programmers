#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<int>> lines)
{
    map<int, int> m;
    int answer = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = lines[i][0]; j < lines[i][1]; j++)
            m[j]++;
    }
    for (int i = -100; i < 100; i++)
    {
        if (m[i] > 1)
            answer++;
    }
    return answer;
}