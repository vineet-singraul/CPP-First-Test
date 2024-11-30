// 7.wap to check the triangle is isocles equilateral or scalene triangle

#include <iostream>
using namespace std;
int main()
{
    int side_a,side_b,side_c;
    cout<<"Enter Side A :";
    cin>>side_a;
    
    cout<<"Enter Side B :";
    cin>>side_b;
    
    cout<<"Enter Side C :";
    cin>>side_c;
    
    if(side_a == side_b && side_b == side_c && side_a == side_c)
    {
        cout<<"Side A : "<<side_a<<"  Side B : "<<side_b<<" Side C : "<<side_c<<endl;
        cout<<"All Sides Of triangle is isocles : ";
    }
    else if(side_a == side_b || side_b == side_c || side_a == side_c)
    {
        cout<<"Side A : "<<side_a<<"  Side B : "<<side_b<<" Side C : "<<side_c<<endl;
        cout<<"Two Sides Of scalene is isocles : ";
    }
    else{
        cout<<"No Any Side Eual To Compares : ";
    }
}
