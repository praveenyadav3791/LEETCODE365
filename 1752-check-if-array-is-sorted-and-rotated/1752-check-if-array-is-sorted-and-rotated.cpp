class Solution {
public:
    bool check(vector<int>& nums) {
       int n = nums.size();
       int reverse = 0;
       for(int i = 0; i < n; i++){
          if(nums[i] > nums[(i+1) %n]){
                reverse++;
          
          }
        
              
        }
        
     return reverse <=1;
    }
};  