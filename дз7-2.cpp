// str40 Из заданной символьной строки выбрать символы, которые встречаются в ней только один раз

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, s1;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        int count = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (c == s[j]) count += 1;
        }

        if (count == 1)
        {
            s1.append(1, s[i]);
        }
    }
    cout << s1;
}

/*
Hello how are you
Hhwaryu
*/

/*
You cannot tell how deep a puddle is until you step into it
Ychwy
*/