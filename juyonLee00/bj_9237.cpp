#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int num;
	int answer=0;
	scanf("%d",&n);
	vector<int> v;
	vector<int> v2;
	while(n--){
		scanf("%d",&num);
		v.push_back(num+2);
	}
	sort(v.begin(),v.end());reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		answer=answer>(v[i]+i)?answer:(v[i]+i);
	}
	printf("%d",answer);
}
