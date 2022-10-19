#include <iostream>
#include<sstream>
using namespace std;


int main()
{
    int n;
    int m;
    int z;
    int t;
    string  Sold_Product ;
    string name_of_cust;
    string product;
    string Employee_ID;
    string Employee_Name;
    string Employee_Depart;





    cout<<"Please Enter Number of Employees: "<<endl;
    cin>>n;
    cout<<endl;
    string arr1[n][3];


    for (int i = 0; i < n; i++)
    {
        cout <<endl<<"Please Enter Employees("<<i+1<<")ID, Name, Department: "<<endl;

        for (int j = 0; j < 3; j++)
        {
            cin>> arr1[i][j];

        }


    }
//_________________________________________

    cout<<endl<<endl<<"Now we are ready to Transactions.."<<endl<<endl;
    cout<<"Please Enter number of products in the order:"<<endl;
    cin>>m;
    cout<<endl<<endl;
    string arr2[m][3];

    for(int i=0 ; i<m ; i++)
    {
        cout<<"Please enter (Sold Product , ID of the employ that sold it ,name of cust ) for the product"<<i+1<<":"<<endl;
        for (int j = 0; j < 3; j++)
        {

            cin>> arr2[i][j];

        }

    }

//_________________________________________
    cout<<endl<<endl<<"PLZ enter the product you want to enter the information of the employee who sold it"<<endl;
    cin>>product;
    for (int i = 0; i < m; i++)
    {

        if (product == arr2[i][0])
        {
            for(int k=0; k<n; k++)
            {

                if(arr2[i][1]==arr1[k][0])
                {
                    cout <<">>>name of employ and department:"<<endl<<"( "<<arr1[k][1]<<" , "<<arr1[k][2] <<" )"<<endl;
                }

            }
        }
    }












    return 0;
}

