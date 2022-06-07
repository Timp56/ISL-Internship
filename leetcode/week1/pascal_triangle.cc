class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++) {
            for(int n = 0; n < nums.size(); n++) {
                if(n != i) {
                    if(nums[i] + nums[n] == target) {
                        answer = {n, i};
                    }
                }
            }
        }
        return answer;
    }
};
