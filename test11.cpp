#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(string my_string)
{
    int answer = 0;
    int i1 = 0;
    int i2 = 0;
    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] >= 48 && my_string[i] <= 57)
        {
            i1 = i;
            while (my_string[i] >= 48 && my_string[i] <= 57)
                i++;
            i2 = i;
            answer += stoi(my_string.substr(i1, i2));
        }
    }
    return answer;
}

int main()
{
    cout << solution("aAb1B2cC34oOp") << endl;
    return 1;
}
