#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n;
    stack<int> s;
    cin >> n;


    while(n != 0)
    {
        string str;
        cin >> str;
        if(str == "push")
        {
            int num;
            cin >> num;
            s.push(num);
        }
        else if(str == "pop")
        {
            cout << (s.empty()? -1 : s.top()) << '\n';
            if(!s.empty())
            {
                s.pop();
            }
        }
        else if(str == "size")
        {
            cout << s.size() << '\n';
        }
        else if(str == "empty")
        {
            cout << s.empty() << '\n';
        }
        else if(str == "top")
        {
            cout << (s.empty()? -1 : s.top()) << '\n';
        }
        n-=1;
    }
}