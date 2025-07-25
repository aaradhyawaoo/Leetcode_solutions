class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> array(nums.size());
        array[0] = nums[0];

        for(int i=1; i<nums.size(); ++i){
            array[i] = nums[i] + array[i-1];       
        }
        return array;

    }
};