#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool comp(double a, double b)
{
    return a > b;
}

vector<int> solution(vector<vector<int>> score)
{
    vector<int> answer;
    vector<double> avr;
    for (int i = 0; i < score.size(); i++)
    {
        avr.push_back(double(score[i][0] + score[i][1]) / 2);
    }
    vector<double> vtmp = avr;
    sort(vtmp.begin(), vtmp.end(), comp);

    for (int l = 0; l < avr.size(); l++)
    {
        cout << "avr = " << avr[l] << ' ' << endl;
    }
    for (int l = 0; l < avr.size(); l++)
    {
        cout << "vtmp = " << vtmp[l] << ' ' << endl;
    }
    map<double, int> m;
    int i = 1;
    int j = 0;
    int k = 0;
    double tmp = -1;
    while (i < score.size())
    {
        if (vtmp[j] == tmp)
        {
            m[vtmp[j]] = i - k;
            k++;
        }
        else
        {
            m[vtmp[j]] = i;
            k = 1;
        }
        tmp = vtmp[j];
        i++;
        j++;
    }
    if (vtmp[j] == tmp)
        m[vtmp[j]] = i - k;
    else
        m[vtmp[j]] = i;

    for (int i = 0; i < score.size(); i++)
    {
        answer.push_back(m[avr[i]]);
    }

    return answer;
}

int main()
{
    vector<vector<int>> score = {{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}, {6, 1}, {7, 1}, {8, 1}, {9, 1}, {0, 0}};
    vector<int> answer = solution(score);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }

    return 1;
}