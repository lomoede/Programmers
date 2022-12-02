#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency)
{
    vector<int> answer;
    vector<int> tmp = emergency;
    sort(tmp.begin(), tmp.end(), greater<int>());
    for (int i = 0; i < tmp.size(); i++)
    {
        cout << tmp[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < tmp.size(); i++)
    {
        answer.push_back(find(tmp.begin(), tmp.end(), emergency[i]) - tmp.begin() + 1);
    }
    return answer;
}

int main()
{
    vector<int> answer;
    answer.push_back(30);
    answer.push_back(10);
    answer.push_back(23);
    answer.push_back(6);
    answer.push_back(100);
    vector<int> answer2 = solution(answer);
    for (int i = 0; i < answer2.size(); i++)
    {
        cout << answer2[i] << endl;
    }

    return 1;
}