#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m;
    unordered_map <string, int> pokemon;
    string arr[100001];
    string str;

    cin >> n >> m;


    for(int i = 1; i <= n; i++)
    {
        cin >> str;

        pokemon.insert(make_pair(str, i));
        arr[i] = str;
    }

    for(int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        if(pokemon.find(str) != pokemon.end())
        {
            cout << pokemon.find(str)->second << '\n';
        }
        else
        {
            int num = stoi(str);
            cout << arr[num] << '\n';
        }
    }


}