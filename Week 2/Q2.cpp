#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int b[100];
    int i =low;
    int j = mid+1;
    int k = 0;
    
    while(i<=mid && j<=high){
        if(arr[i] <arr[j]){
            b[k] = arr[i];
            k++;
            i++;
        }
        else{
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        b[k] = arr[i];
        k++;
        i++;
    }
    while(j<=high){
        b[k] = arr[j];
        k++;
        j++;
    }
    for (int i=low; i<=high; i++) {
        arr[i] = b[i-low];
    }
}

void mergesort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid = (high +low)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}