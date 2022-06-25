#include <cstdlib>
#include <time.h> 
#include <iostream>
 using namespace std;
int partition(int arr[], int low, int high, int &comp)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        comp++;
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
int partition_r(int arr[], int low, int high, int &c)
{
    //srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(arr[random], arr[high]);
    return partition(arr, low, high, c);
}
void quickSort(int arr[], int low, int high, int &count)
{
    if (low < high)
    {
        int pi = partition_r(arr, low, high, count);
        quickSort(arr, low, pi - 1, count);
        quickSort(arr, pi + 1, high, count);
    }
}
int main()
{
    int arr[100];
    int arr_size;
    cin >> arr_size;
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    int comparisons = 0;
    quickSort(arr, 0, arr_size - 1, comparisons);
    cout << "Sorted Array is :" << endl;
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl
         << "comparisons: " << comparisons;
    return 0;
}