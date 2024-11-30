// 8.wap to accept two numbers and operator and give the answer accordingly

#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    
    cout<<"Enter Number 1 : ";
    cin>>num1;
    
    cout<<"Enter Number 2 : ";
    cin>>num2;
    
    cout<<"Enter Any Ooperator : ";
    cin>>op;
    
    if(op == '+')
    {
        cout<<"Sum IS : "<<num1+num2;
    }
    else if(op == '-')
    {
        cout<<"Minu IS : "<<num1-num2;
    }
    else if(op == '*')
    {
        cout<<"Sub IS : "<<num1*num2;
    }
    else if(op == '/')
    {
        cout<<"Div IS : "<<num1/num2;
    }
    else if(op == '%')
    {
        cout<<"Mod IS : "<<num1%num2;
    }
}
