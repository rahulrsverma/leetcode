class Solution {
public:
    int majorityElement(vector<int>& nums) {
   int count, element, n;
        
        n = nums.size();
        
        // finding the element
        element = nums[0];
        count = 1;
        for(int i=1;i<n;i++) {
            if(element != nums[i]) {
                count--;
            }else{
                count++;
            }
            
            if(count == 0) {
               element = nums[i];
                count = 1;
            }
        }
        
     // finding the max element
        count = 0;
        for(int i=0;i<n;i++) {
            if(nums[i] == element) {
                count++;
            }
            
            if(count > (n/2)) {
                break;
            }
        }
        
        return element;
    }
};
