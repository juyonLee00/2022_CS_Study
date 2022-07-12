#include <iostream>
#include <string>

using namespace std;


int main() {
  string str1;
  int n;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> str1;
    int sSize = str1.length();
    int ans = 0;
    int cnt_sum = 0;
    
    for(int j = 0; j < sSize; j++){
      if(str1[j] == 'O'){
        cnt_sum+=1;
        ans += cnt_sum;
      }
      else{
        cnt_sum = 0;
        ans += cnt_sum;
      }
      
    }
    cout << ans << '\n';
  }

return 0;  
}

//초기 str1=NULL설정으로 인해 core dump가 일어남.
