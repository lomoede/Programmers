#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(string numbers)
{
    long long answer = 0;
    int i = 0;
    while (i < numbers.size() - 2)
    {
        if (numbers[i] == 'z')
        {
            numbers.replace(i, 4, "0   ");
            i += 4;
            cout << 0 << endl;
        }
        else if (numbers[i] == 'o')
        {
            numbers.replace(i, 3, "1  ");
            i += 3;
            cout << 1 << endl;
        }
        else if (numbers[i] == 't')
        {
            if (numbers[i + 1] == 'w')
            {
                numbers.replace(i, 3, "2  ");
                i += 3;
                cout << 2 << endl;
            }
            else
            {
                numbers.replace(i, 5, "3    ");
                i += 5;
                cout << 3 << endl;
            }
        }
        else if (numbers[i] == 'f')
        {
            if (numbers[i + 1] == 'o')
            {
                numbers.replace(i, 4, "4   ");
                i += 4;
                cout << 4 << endl;
            }
            else
            {
                numbers.replace(i, 4, "5   ");
                i += 4;
                cout << 5 << endl;
            }
        }
        else if (numbers[i] == 's')
        {
            if (numbers[i + 1] == 'i')
            {
                numbers.replace(i, 3, "6  ");
                i += 3;
                cout << 6 << endl;
            }
            else
            {
                numbers.replace(i, 5, "7    ");
                i += 5;
                cout << 7 << endl;
            }
        }
        else if (numbers[i] == 'e')
        {
            numbers.replace(i, 5, "8    ");
            i += 5;
            cout << 8 << endl;
        }
        else if (numbers[i] == 'n')
        {
            numbers.replace(i, 4, "9   ");
            i += 4;
            cout << 9 << endl;
        }
    }
    numbers.erase(remove(numbers.begin(), numbers.end(), ' '), numbers.end());
    return stoi(numbers);
}

int main()
{
    cout << "solution : " << solution("onetwothreefourfivesixseveneightninenine") << endl;
    return 1;
}