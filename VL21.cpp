#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,a=1,T=0;
	cin>>N;
	if(N>=5 and N<=pow(10,9)){
		while(T<N){
			T+=a;
			if(T+a>N) break;
			a++;
		}
		cout<<a;
	}
    return 0;
}
