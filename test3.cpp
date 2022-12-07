#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz)
{
    vector<string> answer2;
    int answer = 0;
    int result = 0;
    string stringbuffer;
    for (string s : quiz)
    {
        char c = 0;
        istringstream ss(s);
        while (getline(ss, stringbuffer, ' '))
        {
            if (stoi(stringbuffer) >= 48 && stoi(stringbuffer) <= 57)
            {
                if (c == 0)
                    answer += stoi(stringbuffer);
                else if (c == '+')
                    answer += stoi(stringbuffer);
                else if (c == '-')
                    answer -= stoi(stringbuffer);
                else
                    result = stoi(stringbuffer);
            }
            else
                c = stringbuffer.back();
        }
        if (answer == result)
            answer2.push_back("O");
        else
            answer2.push_back("X");
    }
    return answer2;
}

int main()
{
    vector<string> vs;
    vs.push_back("3 - 4 = -3");
    vs.push_back("5 + 6 = 11");
    for (string s : solution(vs))
    {
        cout << s << endl;
    }
    return 1;
}