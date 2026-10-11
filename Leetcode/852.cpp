#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=INT_MIN;
        int ans =0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>max){
                max=arr[i];
                ans=i;
            }
            
        }
        return ans;
        
    }
 
};