#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string polynomial)
{
    istringstream ss(polynomial);
    string stringbuffer;
    int n1 = 0;
    int n2 = 0;
    while (getline(ss, stringbuffer, ' '))
    {
        if (stringbuffer.back() == 'x')
        {
            if (stringbuffer.size() == 1)
                n1 += 1;
            else
            {
                stringbuffer = stringbuffer.substr(0, stringbuffer.size() - 1);
                n1 += stoi(stringbuffer);
            }
        }
        else if (stringbuffer != "+")
            n2 += stoi(stringbuffer);
    }
    string answer = "";
    cout << "n1 = " << n1 << "n2 = " << n2 << endl;
    if (n1 != 0 & n2 != 0)
    {
        if (n1 != 1)
            answer += to_string(n1);
        answer += "x + ";
        answer += to_string(n2);
    }
    else if (n1 == 0 & n2 != 0)
        answer += to_string(n2);
    else if (n1 != 0 & n2 == 0)
    {
        if (n1 != 1)
            answer += to_string(n1);
        answer += "x";
    }
    else
        answer = "0";
    return answer;
}

int main()
{
    cout << solution("1 + 1 + 2") << endl;

    return 1;
}