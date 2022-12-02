#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string my_str, int n)
{
    vector<string> answer(my_str.size() / n + 1);
    for (int i = 0; i < my_str.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i * n + j > my_str.size())
                return answer;
            answer[i].push_back(my_str[i * n + j]);
        }
    }
    return answer;
}

int main()
{
    for (string s : solution("abc1Addfggg4556b", 6))
    {
        cout << s << endl;
    }
    return 1;
}