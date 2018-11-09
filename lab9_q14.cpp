#include <iostream>
using namespace std;
int main()
{
		 char arr[20];
		 cout<<"Enter your name:";
		 cin>>arr;
		 //using the normal index method
		 cout<<"using normal index method"<<endl;
		 int i;
		 for( i=0; i<20; i++) 
		 { 
		     cout<<arr[i]; 
		 } 
		 
		 cout<<endl;
		 
		 char *a;
		 a = arr; 
		 //using the pointer method
		 cout<<" using pointer method"<<endl;
		  while( *a != '\0')
		 {
		     cout<<*a; 
		     a++; 
		 }
		 
	  return 0;
}
