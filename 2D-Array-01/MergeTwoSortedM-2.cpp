#include<iostream>
using namespace std;
int main(){

    int a[]={10,20,40,60,70,90};
    int b[]={20,30,50,80,100};
    int m=sizeof(a)/sizeof(a[0]),n=sizeof(b)/sizeof(b[0]);
    int c[m+n];

    int i=m-1,j=n-1,k=m+n-1;
    while (i>=0 && j>=0){
        if(a[i]>b[j]){
            c[k]=a[i];
            i--;
            k--;

        }else{
            c[k]=b[j];
            j--;
            k--;
        }
    }
    while(i>=0){
        c[k]=a[i];
        i--;
        k--;
    }
    while(j>=0){
        c[k]=b[j];
        j--;
        k--;
    }
    for(int i=0; i<m+n; i++){
        cout<<c[i]<<" ";
    }
    return 0;
}