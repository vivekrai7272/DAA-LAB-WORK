#include <iostream>
 using namespace std;
int merge(int arr[],int temp[], int const left, int const mid, int const right,int &c) {
int i, j, k;
int inversions = 0;
i = left;
j = mid;
k = 0;
while ((i <= mid - 1) && (j <= right)) {
if (arr[i] <= arr[j]) { temp[k++] = arr[i++];
} else {
inversions = inversions+ (mid - i); }
c++;
temp[k++] = arr[j++];
}
while (i <= mid - 1)
temp[k++] = arr[i++];
while (j <= right) temp[k++] = arr[j++];
for (i = 0; i < k; i++) arr[i+left] = temp[i];
return inversions; }
int mergeSort(int array[],int temp[] ,int const begin, int const end,int &count) {
int inversions = 0;
if (end>begin)
{
int mid = begin + (end - begin) / 2; 
inversions+=mergeSort(array,temp, begin, mid,count); inversions+=mergeSort(array,temp, mid + 1, end,count); inversions+=merge(array, temp,begin, mid +1, end,count); }
return inversions; }
int main() {
int a[100];
int arr_size ;
cin>>arr_size;
for(int i = 0; i< arr_size ; i++)
{
cin>>a[i];
}
int temp[100];int comp=0;
int inversions = mergeSort(a,temp, 0, arr_size - 1,comp); for(int i = 0; i< arr_size ; i++)
{
cout<<a[i]<<" ";
}
cout<<"comparisons: "<<comp<<endl; cout<<"inversions: "<<inversions;
return 0; 
}