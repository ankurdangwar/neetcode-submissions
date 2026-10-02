class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           int zero=0;int product=1;
           for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            if(nums[i]!=0){
            product*=nums[i];}
           }
           if(zero>1){
            vector<int> ans(nums.size(),0);
            return ans;
           }
           vector<int> answer;
           for(int j=0;j<nums.size();j++){
            int oppo=1;
            if(nums[j]==0){
                answer.push_back(product);
            }else if(zero==1 && nums[j]!=0){
                
                answer.push_back(product*0);
            }
            else{
                answer.push_back(product/nums[j]);
            }
           }
           return answer;
    }
};
