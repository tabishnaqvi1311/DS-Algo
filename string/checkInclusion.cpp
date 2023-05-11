#include <iostream>
#include <string.h>

using namespace std;

bool checkEqual(int count1[26], int count2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int countOfCharactersInS1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        countOfCharactersInS1[index]++;
    }

    int countOfCharactersInS2[26] = {0};
    int windowSize = s1.length();
    int i = 0;
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        countOfCharactersInS2[index]++;
        i++;
    }

    if (checkEqual(countOfCharactersInS1, countOfCharactersInS2))
    {
        return 1;
    }

    while (i < s2.length())
    {
        int index = s2[i] - 'a';
        countOfCharactersInS2[index]++;

        index = s2[i - windowSize] - 'a';
        countOfCharactersInS2[index]--;

        i++;

        if (checkEqual(countOfCharactersInS1, countOfCharactersInS2))
        {
            return 1;
        }
    }
    return 0;
}

int main() {
    string s1 = "ab", s2 = "abe";
    cout << checkInclusion(s1, s2);
    return 0;
}