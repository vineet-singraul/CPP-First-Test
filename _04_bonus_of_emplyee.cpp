    // wap to give bonus to employe on the basis of certain conditions if tenure is
    // under 10 years and salary is below 1lakh bonus allowed is 20 % for more then 10
    // years and  salary above 1lakh 10 percent bonus is allowed .give the total salary
    // with bonus amount.
    
    #include <iostream>
    using namespace std;
    int main()
    {
        int tenure_working_year,tenure_salary;
        
        cout<<"Enter Working Year : ";
        cin>>tenure_working_year;
        
        cout<<"Enter Salary : ";
        cin>>tenure_salary;
        
        if( tenure_working_year <= 10 && tenure_salary <= 100000 )
        {
            cout<<"Give 20 Percent Compansation in salary : "<<endl;
            cout<<"After Give 20% Increment : "<<(float(tenure_salary * 0.20) + tenure_salary);
        }
        else if( tenure_working_year >= 10 && tenure_salary >= 100000 )
        {
            cout<<"Give 10 Percent Compansation in salary : "<<endl;
            cout<<"After Give 10% Increment : "<<(float(tenure_salary * 0.10) + tenure_salary);
        }
        else{
            cout<<"Invailed Number : ";
        }
    }
    
    
    