class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> imap;
        int rem;
​
        for(int i = 0; i < nums.size(); i++ ){
            rem = target - nums.at(i);
            if(imap.find(rem) != imap.end()) {
                vector<int> vec{imap[rem], i};
                return vec;
            } else {
                imap[nums.at(i)] = i;
            }
        }
​
        return vector<int> {};
    }
};
