#include <iostream>
#include <string>
#include <stack>

using namespace std;

string checkVPS(string s)
{
    stack<char> st_s;
    int s_size = s.size();
    for(int i = 0; i < s_size; i++)
    {
        if(s[i] == '(')
        {
            st_s.push('(');
        }
        else if(!st_s.empty() && s[i] == ')')
        {
            st_s.pop();
        }
        else return "NO";
    }
    if(st_s.empty()) return "YES";
    else return "NO";
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string str;

        cin >> str;

        string ans = checkVPS(str);
        cout << ans << '\n';
        
    }
}