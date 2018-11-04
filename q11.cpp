// Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )

#include<iostream>
using namespace std;

int main()
{
    //declare variables of int
    int a;
    int *p;
    //declare variables of char
    char b;
    char *q;
    //declare variables of bool
    bool c;
    bool *r;
    //declare variables of float
    float l;
    float *s;
    //declare variables of double
    double m;
    double *t;
    //Print out the sizes of each of variables and pointer variables.
    cout<<"size of int is "<<sizeof(a)<<" "<<"and its pointer is "<<sizeof(p)<<endl;

    cout<<"size of char is "<<sizeof(b)<<" "<<"and its pointer is "<<sizeof(q)<<endl;

    cout<<"size of bool is "<<sizeof(c)<<" "<<"and its pointer is "<<sizeof(r)<<endl;

    cout<<"size of float is "<<sizeof(l)<<" "<<"and its pointer is "<<sizeof(s)<<endl;

    cout<<"size of double is "<<sizeof(m)<<" "<<"and its pointer is "<<sizeof(t)<<endl;
return 0;
}

