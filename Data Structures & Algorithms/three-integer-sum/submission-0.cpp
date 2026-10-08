class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        //vector of vector int to store answers in an array of array
        vector<vector<int>> answer;
        int left=0;
        int right=n-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int first=nums[i];
            if(i>0 && nums[i]==nums[i-1]){
                continue;
           }
            left=i+1;
            right=n-1;
            while(left<right){
                long long sum=first+nums[left]+nums[right];
                if(sum==0){
                    answer.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                
                while(left<right && nums[left]==nums[left-1]){
                    left++;
                }
                while(left<right && right<n-1 && nums[right]==nums[right+1]){
                    right--;
                }}
               if(sum>0){
                    right--;
                }
                else if(sum<0){
                    left++;
                }
            }
        }
        return answer;
    }
};
