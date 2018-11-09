#include<iostream>
using namespace std;

int main()
{
   int array[10]={1,2,3,4,5,6,7,8,9,0};
   //Use a loop to print array using the normal index method
   cout<<"using the normal index method"<<endl;
	// using condition loop    
	for (int i=0;i<10;i++)
	{
		cout<<array[i]<<" ";
	}   
	cout<<endl;
    //Use a loop to print array using the pointer method
    int *k = array;
    cout<<"using the pointer method"<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<*k<<" ";
        k++;
    }
   return 0;
}
