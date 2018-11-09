#include <iostream>
using namespace std;
int main()
{
    char nor[20];char* c;
    cout<<"Input 10 characters of string"<<endl;
    cin>>nor;
    c=&nor[0];
    //Loop to count the rows
    for(int i=0;i<=10;i++)
    {
        //Loop to print the values
        for(int j=i;j<=10;j++)
        {
            cout<<*(c+j);
        }
        cout<<endl;
			//change the row
    }
    return 0;
}
