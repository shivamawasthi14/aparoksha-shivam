#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,m,tb=0,count=0;
		cin>>n>>m;
		long long int bb[n];
		string s;
		int p=0;
		cin>>s;
		bool flag=false;
		for(int i=n-1;i>=0;i--){//abcb//aayzbaa
			if(s[i]=='b'){
				tb++;
			}
			if(s[i]=='a'){
				bb[p++]=tb;
			}
		}
		long long int sum=0;
		for(int i=0;i<p;i++){
			//cout<<bbn[i]<<"\n";
			sum+=m*bb[i]+(tb*m*(m-1))/2;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
