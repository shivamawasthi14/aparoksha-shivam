#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long int
#define p(x) printf("%d",x)
#define pd(x) printf("%lf",x)
#define pl(x) printf("%lld",x)
#define s(x) scanf("%d", &x)
#define sd(x) scanf("%lf", &x)
#define sl(x) scanf("%lld", &x)
#define nl printf("\n");
#define mod 1000000007
int main(){
	int t;
	s(t);
	while(t--){
		int n,m;
		s(n);
		s(m);
		string s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		bool flag=false;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if((j==0 || j==m-1 || i==n-1 ) && (s[i][j]=='W')){
					printf("no\n");
					flag=true;
					break;
				}
				if(s[i][j]=='W' && j+1<m && s[i][j+1]=='A'){
					printf("no\n");
					flag=true;
					break;
				}
				if(s[i][j]=='W' && j-1>=0 && s[i][j-1]=='A'){
					printf("no\n");
					flag=true;
					break;
				}
				if(s[i][j]=='W' && i+1<n && s[i+1][j]=='A'){
					printf("no\n");
					flag=true;
					break;
				}
				if(s[i][j]=='B' && i+1<n && s[i+1][j]=='A'){
					printf("no\n");
					flag=true;
					break;
				}
			}
			if(flag){
				break;
			}
		}
		if(!flag){
			printf("yes\n");
		}
	}
    return 0;
}
