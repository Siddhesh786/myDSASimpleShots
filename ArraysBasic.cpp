
#include<iostream>
using namespace std;

int main()
{

    // int marks;
    int n;
    cout<<"Enter the size  of an your aray "<<endl;
    cin>>n;
    int marks[n];
    
    for ( int i = 0; i <= n-1; i++)
    {   
        cout<<"enter "<<i<<" position for number  "<<endl;
        cin>>marks[i];
    }
    
    cout<<"The arrays elemnts are ";
     for ( int i = 0; i <= n-1; i++)
    {   
        // cout<<"enter "<<i<<" position for number  "<<endl;
        // cin>>marks[i];
        cout<<marks[i]<<" ";
    }
    

    return 0;
}
