#include<iostream>
using namespace std;


void print(int arr[] , int m){
     for(int i = 0; i < m ; i++){
        cout << arr[i] << " ";
     }
}

void bubblesort(int arr[] , int n){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j + 1] ){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int size = 6;
    int array[size];

    for (int i = 0 ; i < size ; i++){
        cout << "Entar[" << i << "]: ";
        cin >> array[i];
    }

    bubblesort(array, size);
    print(array , size);
 
}