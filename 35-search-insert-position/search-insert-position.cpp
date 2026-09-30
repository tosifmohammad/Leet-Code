class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int end = n-1;
        

        while(low <= end){
        int mid = low + (end - low)/2;

         if(nums[mid] == target){
            return mid;
         }
         else if(nums[mid] < target){
            low = mid+1;
         }
         else if(nums[mid] > target){
            end = mid-1;
         }
        }

        return low ;

    }
};