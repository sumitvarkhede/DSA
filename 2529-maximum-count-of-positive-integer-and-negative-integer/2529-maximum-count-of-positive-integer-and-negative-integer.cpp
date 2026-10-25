class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int result;
        int pos=0;
        int neg=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0){
                
                count1++;
            }

        }
        for(int j =0;j<nums.size();j++){
            if(nums[j]<0){
                
                count2++;

            }
        }
        if(count1>count2){
            return count1;
        }
        else{
            return count2;
        }
    }
};