#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int loop =0;
        int maxcount=0;
        for (int i=0; i<n; i++ ){
            if(nums[i]==1){
                loop= loop +1;
                maxcount =max(maxcount,loop);
            }
            else loop=0;
        }
        return maxcount;

    }
};