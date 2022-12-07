#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numlist, int n)
{
    vector<int> answer;
    for (int i = 0; i < numlist.size(); i++)
    {
        for (int j = 0; j < numlist.size() - 1; j++)
        {
            if (abs(numlist[j] - n) > abs(numlist[j + 1] - n))
            {
                swap(numlist[j], numlist[j + 1]);
            }
            else if (abs(numlist[j] - n) == abs(numlist[j + 1] - n))
            {
                if (numlist[j] < numlist[j + 1])
                    swap(numlist[j], numlist[j + 1]);
            }
            else
                continue;
        }
    }
    return numlist;
}

int main()
{
    vector<int> numlist = {10000, 20, 36, 47, 40, 6, 10, 7000};
    int n = 30;
    vector<int> answer = solution(numlist, n);
    cout << "[";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ",";
    }
    cout << "]";

    return 1;
}