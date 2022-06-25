#include <iostream>
using namespace std;



void insertion(int a[],int n)
{
    int i,j,t=0,comp = 0 , shfts = 0;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i;
        while(j>=1 && t<a[j-1])
        {
            a[j]=a[j-1];
            j--;
            comp++;
        }
        a[j]=t;
        shfts++;
    }
    for(int i = 0 ; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<comp<<"  "<<shfts<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n; i++)
    {
        cin>>a[i];
    }
    insertion(a,n);
}