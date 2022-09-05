#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<conio.h>
int main()
{
    int n,i,j;
    cout<<"Enter the No. of Steps : ";
    cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    getch();
    return 0;
}