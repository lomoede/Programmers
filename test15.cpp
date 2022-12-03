#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> quiz)
{
    vector<string> answer;
    vector<string> quiz_list;
    string tmp;
    for (string s : quiz)
    {
        istringstream ss(s);
        while (getline(ss, tmp, ' '))
        {
            quiz_list.push_back(tmp);
        }
        if (quiz_list[1] == "+")
            (stoi(quiz_list[0]) + stoi(quiz_list[2])) == stoi(quiz_list[4]) ? answer.push_back("O") : answer.push_back("X");
        else
            (stoi(quiz_list[0]) - stoi(quiz_list[2])) == stoi(quiz_list[4]) ? answer.push_back("O") : answer.push_back("X");
        cout << quiz_list[0] << " " << quiz_list[2] << " " << quiz_list[4] << endl;
        quiz_list = {};
    }
    return answer;
}

int main()
{
    vector<string> quiz = {"19 - 6 = 13", "5 + 66 = 71", "5 - 15 = 63", "3 - 1 = 2"};
    vector<string> answer = solution(quiz);
    for (string s : answer)
    {
        cout << s << endl;
    }

    return 1;
}