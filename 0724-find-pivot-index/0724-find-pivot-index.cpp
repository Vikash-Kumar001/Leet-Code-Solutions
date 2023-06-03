class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum=0;
       for( int i=0;i<nums.size();i++){
           sum+=nums[i];
       }
       int leftsum=0, rightsum=sum,start=0,end=nums.size()-1;
       while(start<=end){
           rightsum-=nums[start];
           if(leftsum==rightsum){
               return start;
           }
           leftsum+=nums[start];
           start++;
       }
       return -1;
    }
};