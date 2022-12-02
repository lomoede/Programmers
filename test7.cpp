#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int to_int(string s)
{
    int result = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        result += (s.back() - '0') * pow(2, i);
        s.pop_back();
    }
    return result;
}

string solution(string bin1, string bin2)
{
    string answer = "";
    int num = to_int(bin1) + to_int(bin2);
    while (num)
    {
        answer.push_back((num % 2) ? '1' : '0');
        num /= 2;
    }
    reverse(answer.begin(), answer.end());
    return answer;
}

int main()
{
    cout << solution("0", "0");
    return 1;
}