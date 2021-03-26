#include<iostream>

using namespace std;

string s;
int cnt = 0;
int upper = 0;
int lower = 0;

int main()
{
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i]))
        {
            upper+=1;
        }
        else
        {
            lower+=1;
        }
    }

    if(upper>lower)
    {
        for(int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for(int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    
    cout << s << endl;

    return 0;
}