#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int A=abs(a); int B=abs(b);
	if(A!=0 and B!=0){
		if(A==B){
			cout<<A;
		}
		else if(A!=0 and B!=0){
			while(A*B!=0){
				if(A>B)
				{
					A%=B;
				}
				else
				{
					B%=A;
				}
			}
			cout<<A+B;
		}
	}
	else{
			if(A>B) cout<<A;
			else cout<<B;
		}
    return 0;
}

//bcnn
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int A = abs(a); int B = abs(b);
	int bcnnMax = A*B;
	if(A<=1000 and B<=1000)
	{
		if(A != 0 and B != 0)
		{
			for(int i = max(A,B); i <= bcnnMax; i+=max(A,B)){
				if(i%a==0 and i%b==0){
					cout<<i;
					break;
				}
			}
		}
		else if(A == 0 and B == 0 || A==0 or B==0)
		{
			cout<<A*B;
		}
	}
    return 0;
}
