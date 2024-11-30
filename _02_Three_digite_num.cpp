// .wap to check number is 3 digit or not
#include <iostream>
using namespace std;
int main()
{
    int userNumber;
    cout<<"Enter Number: ";
    cin>>userNumber;
    
    if(userNumber >= 100 &&  userNumber <= 999)
    {
        cout<<"Thise Is Three Digite Number :";
    }
    else{
        cout<<"Thise Is Not Three Digite number : ";
    }
}