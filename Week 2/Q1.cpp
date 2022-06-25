#include <iostream>
using namespace std;

int binary_search(int a[], int n, int key)      //implement binary search algo to find the given element
{
    int ub=n-1, lb=0, mid=0, index=0;
    while(lb <= ub)
    {
        mid = lb + (ub-lb)/2;
        if(a[mid] == key)
            return mid;
        if(a[mid]<key)
            lb = mid +1;
        if(a[mid]> key)
            ub = mid -1;
    }
    return -1;                          // return -1 if element is not found
}

int main()
{
    
    int key=0,count=1;
    int arr[] = {23, 25, 32, 32, 32, 35, 35, 67, 89, 90, 91, 100};
    cin>>key;

    int n = sizeof(arr)/sizeof(arr[0]);
    int ans=binary_search(arr, n-1 , key);      // storing the return of binary search in ans

    for(int i = ans + 1; i < n; i++)          // to check if number is repeated infront of the found element
    {
        if(arr[i] == key)
            count++;
        else                    // break if the number changes from key to any other value
            break;
    }

    for(int i = ans - 1; i > 0; i--)        // to check whether number is repeated before the found element
    {
        if(arr[i] == key)
            count++;
        else                // break if the number changes from key to any other value
            break;
    }

    if(ans == -1)           // if binary search returns -1, i.e. element not found
        cout<<"Not Found";  
    else                    // if element is found, also display the number of times element is repeated
        cout<<"Found it " <<count<< " times"<<endl;

}