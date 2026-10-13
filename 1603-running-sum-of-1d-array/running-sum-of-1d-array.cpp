class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        vector<int>sums;

        for(int i = 0;i<nums.size();i++){
                int temp = 0;

            for(int j = 0;j<=i;j++){
                temp+=nums[j];

                
            }
            sums.push_back(temp);
        }
        return sums;
    }
};