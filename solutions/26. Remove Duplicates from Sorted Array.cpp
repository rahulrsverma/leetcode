class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   int x = nums.size();
        if (x==0 || x==1) 
        return x; 
        int newx = 0; 
      for (int i=0; i < x-1; i++) 
        if (nums[i] != nums[i+1]) 
            nums[newx++] = nums[i]; 
  
    nums[newx++] = nums[x-1]; 
  
    return newx; 
    }
};
