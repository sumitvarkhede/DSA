
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        vector<int> ans;

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == target) {
                        ans.push_back(i);
                    }
                }
                return ans;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};

