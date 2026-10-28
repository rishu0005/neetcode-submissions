class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
        for(int j = 1; j < nums.size(); j++){
            
            int sum = nums[i] + nums[j];
            if(sum == target && i != j){
                 std::cout << i << " " << j;
                 return {i  , j} ; 
            }
        }
       
        
        

        
    }
    }
};
