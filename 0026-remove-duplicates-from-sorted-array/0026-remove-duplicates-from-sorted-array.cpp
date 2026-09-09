class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =  nums.size();
        int start = 0;
        for(int j=1;j<n;j++){
            if(nums[start]!=nums[j]){
                start++;
                nums[start]=nums[j];

            }
        }
        return start + 1;
    }
};