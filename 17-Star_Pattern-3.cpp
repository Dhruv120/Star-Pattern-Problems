// INVERTED HALF PYRAMID

# include <iostream>
using namespace std;

int main()
{
    int n; //5
    cout<<"Enter the Number : ";
    cin>>n;

    for(int i= 1 ; i <=n ; i++)
    {
        for(int j = i ; j<=n ; j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }

}   

