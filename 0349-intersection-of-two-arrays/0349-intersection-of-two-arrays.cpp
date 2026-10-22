class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
vector<int> inter;
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(nums1[i]== nums2[j]){
                  int flag=0;
for(int k = 0; k < inter.size(); k++)
 { if(inter[k] == nums1[i]) 
 { flag = 1;
  break;
  }
   } if(flag == 0)
    { inter.push_back(nums1[i]); 
    }
     break;
      } 
      } 
      } 
      return inter;
       } 
       };