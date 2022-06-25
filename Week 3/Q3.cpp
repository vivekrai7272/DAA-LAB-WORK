#include <iostream> 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, f = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (i = 0; i < n - 1; i++)
            if (arr[i] == arr[i + 1])
            {
                f = 1;
                break;
            }
        if (f == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;