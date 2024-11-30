// 9.wap to check the cititizens age if it senior or not with the gender
// gender=male/female
// age
// if age is above 60 then only the citizen is senior.

#include <iostream>
using namespace std;
int main()
{
    string gender;
    int age;
    
    cout<<"Enter Gender : ";
    cin>>gender;
    
    cout<<"Enter Age : ";
    cin>>age;
    
    if(gender == "male" || gender == "female")
    {
        if(age >= 60)
        {
            cout<<"You Entered "<<gender<<endl;
            cout<<"Your Age Is : "<<age<<endl;
            cout<<"You are Ciniare Cityzan :";
        }
        else{
            cout<<"You Entered "<<gender<<endl;
            cout<<"Your Age Is : "<<age<<endl;
            cout<<"You are Not Ciniare Cityzan :";
        }
    }
    else{
            cout<<"Your Age Is : "<<age<<endl;
            cout<<"You are Not Ciniare Cityzan :";
    }
    
}