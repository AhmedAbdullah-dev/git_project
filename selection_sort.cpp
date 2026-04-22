#include<iostream>
using namespace std;

void print(int arr[] , int m){
     for(int i = 0; i < m ; i++){
        cout << arr[i] << " ";
     }
}

void selection(int arr[], int n){
    for (int i = 0; i < n; i ++){
        int min = i;

        for (int j = i + 1; j < n ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }   
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    int size = 6;
    int array[size];

    for (int i = 0 ; i < size ; i++){
        cout << "Entar[" << i << "]: ";
        cin >> array[i];
    }

    selection(array , size);
    print(array , size);
 
}