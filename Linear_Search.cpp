#include<iostream>
using namespace std;

int linearsearch(int arr[] , int size , int value){
    for (int i = 0; i < size; i++){
    
        if(arr[i] == value)
        return value;
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

    int m = linearsearch(arr , size , value);
    if (m < 0)
       cout << "Element is not found" << endl;
       else
       cout << "Element found in index : " << m ;

       return 0;

}