#include<iostream>
using namespace std ;
int main (){
    int arr[]={1,2,3,4,5};

    int n=sizeof(arr)/sizeof(int);

    int product=1;

    for(int i=0; i<n; i++){
        product=product*arr[i];
    }
cout<<product;
    return 0;
} 