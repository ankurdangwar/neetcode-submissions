class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int mid=0+(numbers.size()-0)/2;
        for(int i=0;i<numbers.size()-1;i++){
            int low=i+1;
            int high=numbers.size()-1;
            int tmp=target-numbers[i];
            while(low<=high){
                mid=low+(high-low)/2;
                if(numbers[mid]==tmp){
                    return {i+1,mid+1};
                }
                else if(numbers[mid]<tmp){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }return {};
    }
};
