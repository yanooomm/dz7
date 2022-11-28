// str21 Дана строка s переведите строку в нижний регистр

#include <iostream>
#include <string>

using namespace std;

char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z') 
    {
        return c + 32;
    }
    return c;
}

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) 
    {
        char c = to_lowercase(s[i]);
        cout << c;
    }

}