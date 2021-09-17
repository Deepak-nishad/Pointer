#include<iostream>
using namespace std;
int main()
{
int i=10;
int *p=&i;
cout<<p<<endl;
p=p+1;
cout<<p<<endl;
p=p-1;
cout<<p<<endl;

//Arithmatic pointer use only in the case of array 
int arr[]={1,2,3,4,5};
int *q=arr;
cout<<&arr[0]<<endl;
cout<<q<<endl;
cout<<*q<<endl;
cout<<*q+1<<endl;	
}
