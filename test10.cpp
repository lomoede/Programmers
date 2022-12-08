#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> common)
{
    if (2 * common[1] == common[0] + common[2])
        return common.back() + *(common.end() - 1) - *(common.end() - 2);
    else
        return common.back() * *(common.end() - 1) / *(common.end() - 2);
}