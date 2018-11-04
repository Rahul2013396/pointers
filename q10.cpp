// function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.
#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char *a)
{
	  // WRITE YOUR CODE HERE
	  cout << "The reverse is ";
	  for(int i=10;i>=0;i--)
	  {
	  cout << *(a+i);
	  }
	  cout << endl;
}

int main()
{
  	char k[10] = "abcde";
 	reverseString(k); 
        // calling the function
 	return 0;
}

