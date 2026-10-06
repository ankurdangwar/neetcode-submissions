class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int result=0;
        int curr=nums[0];
        int streak=1;
        for(auto num:nums){
            if(curr+1==num){
                    streak++;
                    curr=num;
            }else if(curr==num){
             
                result=max(streak,result);
                   continue;
            }else{
                if(curr+1!=num){
                    curr=num;
                    streak=1;
                }
            }
            result= max(streak,result);
        }
        return result;
    }
};
