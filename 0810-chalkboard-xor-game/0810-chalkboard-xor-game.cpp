class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int n=0;
        for(int j =0;j<nums.size();j++){
            n = n ^nums[j];
        }
            if(n==0|| nums.size()%2==0){
                return true;
            }
        
        return false;
    }
};