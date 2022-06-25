#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int count = 0;                      //counter to store the number of pairs
    int arr[] = {24, 71, 16, 92, 12, 28, 48, 14,20, 22};

    int n = sizeof(arr)/sizeof(arr[0]);   // calculating the size of the array
    int key;
    cin >> key;
    sort(arr ,arr + n);                 //to avoid repetition for +ve value of key and -ve value of key

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(arr[j] - arr[i] == key)      // if diff of arr[j] and arr[i] is equal to key value
                 count++;                   // then increment value of count
        }
    }
    cout << count <<endl;

}