#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.length();
		bool flag=false,e,ss,c;
		e=ss=c=false;
		for(int i=0;i<l;i++){
			if(s[i]=='C' && (e || ss)){
				cout<<"no\n";
				flag=true;
				break;
			}
			if(s[i]=='E' && ss){
				cout<<"no\n";
				flag=true;
				break;
			}
			if(s[i]=='E'){
				e=true;
			}
			if(s[i]=='S'){
				ss=true;
			}
			if(s[i]=='C'){
				c=true;
			}
		}
		if(!flag){
			cout<<"yes\n";
		}
	}
	return 0;	
}
