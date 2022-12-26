class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0; i<nums.size()-2; i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k<n; k++){
                    for(int x=k+1; x<n; x++){
                        if(nums[i] + nums[j] + nums[k] == nums[x] && i<j<k<x){
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};