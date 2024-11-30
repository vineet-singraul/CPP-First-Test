#include <iostream>
using namespace std;
int main()
{
    int cost_price, max_range_price , selling_price;
    float discount = 0;
    cout<<"Enter Cost Price : ";
    cin>>cost_price;
    
    cout<<"Enter Max Range Price : ";
    cin>>max_range_price;

    
    if(cost_price == 1000 && max_range_price == 2000)
    {
        cout<<"Give 10 Percent Discount : "<<endl;
        discount = max_range_price * 0.10;
    }
    else if(cost_price == 2000 && max_range_price == 4000)
    {
        cout<<"Give 20 Percent Discount : "<<endl;
        discount = max_range_price * 0.20;

    }
    else if(cost_price == 3000 && max_range_price == 6000)
    {
        cout<<"Give 30 Percent Discount : "<<endl;
        discount = max_range_price * 0.30;
    }
    else if(cost_price == 4000 && max_range_price == 8000)
    {
        cout<<"Give 40 Percent Discount : "<<endl;
        discount = max_range_price * 0.40;
    }
    else{
        cout<<"You Entered Something Invailed : ";
    }
    
    max_range_price = max_range_price - discount;
    cout<<"Total Discount Price In Produvt : "<<max_range_price;
    
}
 