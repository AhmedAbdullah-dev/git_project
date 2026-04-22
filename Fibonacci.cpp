#include <iostream>
using namespace std;

int main(){
 int n ;
 cout << "enter the value: ";
 cin >> n;
 
 int a = 0 , b = 1;
 
 if(n >= 0){
    cout << a << " ";
 }

 if (n >= 1){
    cout << b << " ";
 

 for (int i = 2; i <= n; i++){
    int c = a+b;
    cout << c << " ";
    
    a=b;
    b=c;
 }
 
 return 0 ;
}

}
