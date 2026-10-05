class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        priority_queue<int ,vector<int>,greater<int>> minHeap;
        for(int i=0;i<nums.size();i++){
            minHeap.push(nums[i]);
        }
        int start=0;
        if(!minHeap.empty()){
         start=minHeap.top();
        minHeap.pop();}
        int count=1;
        int maxCount=1;
        while(!minHeap.empty()){
            if(start+1==minHeap.top()){
                count++;
                maxCount=max(count,maxCount);
                start=minHeap.top();
                minHeap.pop();
            }else if(minHeap.top()==start){
                start=minHeap.top();
                minHeap.pop();
                continue;
            }else{
                count=1;
                start=minHeap.top();
                minHeap.pop();
            }
        }
        return maxCount;
    }
};