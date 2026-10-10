class Solution {
public:
    int maxArea(vector<int>& heights) {
        int leftMax=0;
        int rightMax=heights.size()-1;
        int res=0;
        while(leftMax<rightMax){
            int area=min(heights[leftMax],heights[rightMax])*(rightMax-leftMax);
            res=max(area,res);
            if(heights[leftMax]<=heights[rightMax]){
                leftMax++;
            }
            else{
                rightMax--;
            }
        }
        return res;
    }
};
