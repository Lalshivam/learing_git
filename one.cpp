                     //1480. Running Sum of 1d Array

class Solution {
public:
    vector<int> runningSum(vector<int> &nums) {
        int s=0;
        vector<int> res;
        for(int i=1;i<=nums.size();i++){
            s=0;
            for(int j=0;j<i;j++){
                s+=nums[j];
            }
           res.push_back(s);
        }
        return res;
    }
};