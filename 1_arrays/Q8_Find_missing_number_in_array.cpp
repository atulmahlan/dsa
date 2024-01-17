class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int arr_sum = 0;
        for ( int i = 0; i < n ; i++){
            arr_sum = arr_sum + nums[i];
        }

        int sum = n*(n+1)/2;
        int missingnumber = sum - arr_sum;
        return missingnumber;
    }
};
