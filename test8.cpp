#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s)
{
    stringstream ss(s);
    int tmpn;
    string tmp;
    int answer = 0;
    while (getline(ss, tmp, ' '))
    {
        if (tmp == "Z")
            answer -= tmpn;
        else
        {
            answer += stoi(tmp);
            tmpn = stoi(tmp);
        }
    }
    return answer;
}

int main()
{
    cout << solution("10 20 30 40 ") << endl;
    return 1;
}