#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n ;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;   
        }
        else if (arr[mid] < target) {
            left = mid + 1;  
        }
        else {
            right = mid - 1;
        }
    }

    return -1; 
}

int main (){
    int size , value;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Enter number you want to search : ";
    cin >> value;

    int m = binarySearch(arr , size , value);
    if (m < 0)
       cout << "Element is not found" << endl;
       else
       cout << "Element found in index : " << m ;

       return 0;

}
