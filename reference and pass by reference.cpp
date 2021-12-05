#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=10;
	int j=i;
	i++;
	cout<<j<<endl; // 10 
	cout<<i<<endl;  // 11
	
	int &k=i;
	k++;
	cout<<k<<endl;  // 12
    
    int g=100;
	int &f;
	f=g;
}
