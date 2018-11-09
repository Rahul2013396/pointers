#include<iostream>
using namespace std;
int main()
{
    int j;
    int k;
    int *l;
    //Point p to a. And store the value pointed by p in b. Print the values of j,k and *l
    l=&j;
    k=*l;
    cout<<"j = "<<j<<endl;
    cout<<"k = "<<k<<endl;
    cout<<"*l = "<<*l<<endl;
    
    cout <<endl;
    //Assign values j=2 and k = 3. Print the values of j, k and *l. 
    j=2;
    k=3;
    cout<<"j= "<<j<<endl;
    cout<<"k= "<<k<< endl;
    cout<<"*l= "<<*l<<endl;
    
    cout <<endl;
    //Now point lto j Print the values of j,k and *l
    l=&k;
    cout<<"j= "<<j<<endl;
    cout<<"k= "<<k<<endl;
    cout<<"*l= "<<*l<<endl;
    
    cout <<endl;
}
