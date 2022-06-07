#include <iostream>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int store;
        
        for (int i = nums.size()-1; i > 0; i--) {
            if (nums[i] > nums[i-1]) {
                store = nums[i-1];
                nums.swap(nums.begin(), nums.end(), nums[i-1], nums[i]);
                //return
            }
            
            else {
                
            }
        }
    }
};
