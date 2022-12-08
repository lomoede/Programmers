#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int num, int total)
{
    vector<int> answer;
    for (int i = 0; i < n; i++)
    {
        answer.push_back(i + total / num - num / 2);
    }

    return answer;
}

int main()
{
    cout << 3 / 2 << endl;

    return 1;
}