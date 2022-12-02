#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string)
{
    int answer = 0;
    int num = 0;
    string tmp;
    vector<string> strings;
    istringstream ss(my_string);

    while (getline(ss, tmp, ' '))
    {
        strings.push_back(tmp);
    }
    answer += stoi(strings.front());
    for (int i = 1; i < strings.size(); i += 2)
    {
        if (strings[i] == "+")
            answer += stoi(strings[i + 1]);
        else
            answer -= stoi(strings[i + 1]);
    }
    return answer;
}

int main()
{
    cout << solution("3 + 4");
    return 1;
}