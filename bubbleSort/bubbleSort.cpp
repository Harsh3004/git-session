#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    for(int i = 0 ; i < n ; i++){
        //after each iteration greatest element in (i to n-i) is at their correct position

        for(int j = 0 ; j < n-i ; j++){

            //we compare elements at j and j+1
            if(arr[j] > arr[j+1]){

                //if element at j is found greater then we swap j and j+1
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    
    int n;
    cout<<"Enter Size of array : ";
    cin >> n;

    //dynamically creating array of variable size
    int* arr = new int[n];

    //taking input from user
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    //bubble sort function called
    bubbleSort(arr,n);


    //printing sorted array
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] <<" ";
    }
    
    return 0;
}