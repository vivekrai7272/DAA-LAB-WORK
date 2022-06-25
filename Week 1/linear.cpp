#include <iostream>
using namespace std;
int main()
{
    
    int t,num;              //Test Cases, number
    cin>>t;      
    while(t--)
    {
        int n,c=0;                  //Size of the array
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>num;
        for(int i=0;i<n;i++)
        {
            if(a[i]==num)
            {
                cout<<"Present "<<i+1<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<"Not Present"<<endl;
    }
}