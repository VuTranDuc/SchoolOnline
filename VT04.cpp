#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,a[100];
	cin>>n>>x;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	bool right = false;
	for (int i = 0; i<n; i++){
		if(x == a[i])	right = true;
	}
	if(right == true)	cout<<"YES";
	else	cout<<"NO";
}

