#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=arr[i];
        int m=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                m=j;
            }
        }
        swap(arr[i],arr[m]);
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of elements in your array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the data of array \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);

    cout<<"The array is sorted\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}