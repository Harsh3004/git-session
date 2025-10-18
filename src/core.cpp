#include <iostream>
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

int main(){
    cout << "Welcome to CLI based array operations" << endl;

    int choice,n = 0;
    int *arr = NULL;
    do
    {
        cout << "Enter the choice of operation you want to perform: " << endl;
        cout << "1. Create an array." << endl;
        cout << "2. Get Sorted array." << endl;
        cout << "3. Apply Searching." << endl;
        cout << "4. Print Array" << endl;
        cout << "5. exit" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter size of array you want to create: ";
                cin >> n;
                if(n == 0){
                    cout << "Invalid Size" << endl;
                    break;
                }

                arr = new int[n];
                cout << "Enter all the element you want to insert in an array" << endl;
                for(int i=0;i<n;i++){
                    cin >> arr[i];
                }
                break;
            
            case 2:
                if(n == 0){
                    cout << "Array is Empty" << endl;
                    break;
                }

                cout << "As you want applying sorting algorithm, select sorting algorithm you want to apply"<<endl;
                cout << "1. Selection Sort" << endl;
                cout << "2. Bubble Sort" << endl;
                int algo;
                cin >> algo;
                switch (algo)
                {
                    case 1:
                        cout << "Applying Selection Sort" << endl;
                        // Call selection sort function
                        SelectionSort(arr,n);
                        break;
                        
                        case 2:
                        cout << "Applying Bubble Sort" << endl;
                        // Call bubble sort function
                        break;
                    
                    default:
                        cout << "Invalid algorithm option entered." << endl;
                        break;
                }
                break;

            case 3:
                if(n == 0){
                    cout << "Array is Empty" << endl;
                    break;
                }

                cout << "For searching select searching algorithm" << endl;
                cout << "1. Linear Search" << endl;
                cout << "2. Binary Search" << endl;
                int search;
                cin >> search;
                switch (search)
                {
                case 1:
                    cout << "Applying Linear Search" << endl;
                    // Call linear Search Function
                    break;

                case 2: 
                    cout << "Applying Binary Search" << endl;
                    // Call Binary Search Function
                    break;
                default:
                    cout << "Invalid Choice" << endl;
                    break;
                }

            case 4:
                cout << n << endl;
                if(n == 0){
                    cout << "Array is Empty" << endl;
                    break;
                }

                cout << "Printing an array" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 5:
                cout << "Thank You" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
        }
    } while (choice != 5);
    
    return 0;
}