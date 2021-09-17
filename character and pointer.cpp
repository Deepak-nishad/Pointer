#include<iostream>
using namespace std;
int main()
{

//in case of arr it print address
int arr[]={1,2,3,6,4};
cout<<arr<<endl;

//in the case of character it print string
char ch[]="abcde";
cout<<ch<<endl;

 char str[]="abcde"; // in which temporary memory is create and for storing the string but in this we use char array it provide the memory space for storing the string.It is our memory we can use.
  char *pstr="abcde"; // in which temporary memory is create and for storing the string and the pointer directly pointed this in this case when we change the string sometime error sometime not.because we chane in tempory memory. 
	
}
