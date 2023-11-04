#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double a,b;
    char op;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    cout<<"enter the operator(+,-,*,/)";
    cin>>op;
    while(1)
    {
        switch(op)
        {
            case '+':
                     cout<<a+b;
                     break;
            case '-':
                     cout<<a-b;
                     break;
            case '*':
                     cout<<a*b;
                     break;
            case '/':
                     cout<<a/b;
                     break;                  
            default :
                     cout<<"invalid operator";
                     break;         
        }
        return 0;
    }

    

    }

   
