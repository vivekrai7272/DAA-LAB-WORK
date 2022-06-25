#include <iostream>
using namespace std;

void Ins_sort(int a[],int n)
{
    int i,j,temp=0,comp = 0, shfts = 0;
    for(int i=1;i < n; i++)
    {
        temp = a[i];
        j = i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1] = a[j];
            shfts++;
            j = j-1;
            comp = comp +1;
        }
            a[j+1] = temp;
            shfts ++ ;
        
    }
    for(int i=0; i < n;  i++)
    {
        cout<<a[i]<<" " ;
    }
    cout<<endl<<comp<< " "<< shfts<<endl;
}

int main()

{
    int n=0;
    cin>>n;
    int a[n];
    for(int i=0; i < n; i++)
    {
        cin>>a[i];
    }
    Ins_sort(a,n);

}