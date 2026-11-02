class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=n; i++){ //range ele
            int found = 0;
            for(int j=0; j<n; j++){ //array ele
                if(nums[j] == i){
                    found = 1;
                    break;
                }
            }
            if(found == 0){ //not found --> missing
                return i; //missing num
            }
        }
        return -1;
    }
};
