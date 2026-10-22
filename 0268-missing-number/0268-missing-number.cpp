class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int miss=0;
        for(int i=0;i<n;i++){
        if(nums[i] != i){
            miss =i;
            return miss;


        }
        
}   
    return n;
        
    }
};