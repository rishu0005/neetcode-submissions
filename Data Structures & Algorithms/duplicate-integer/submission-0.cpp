class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
    
        for(int i = 0; i < n; i++){
            for(int j = i; j < n - 1; j++){
                if(nums[i] == nums[j + 1]){
                    return true;
                   
                }
            }
        }


       return false;
    }
};