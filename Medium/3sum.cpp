class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>s;
        vector<vector<int>>b;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int k=i+1,l=n-1;
            while(k<l){
                int sum=nums[k]+nums[l];
                int aim=0-nums[i];
                if(sum>aim) l--;
                else if(sum<aim) k++;

                else{
                   s.insert({nums[i],nums[k],nums[l]});
                    k++;
                    l--;
                }
            }
        }
        for(auto i:s) b.push_back(i);
        return b;
    }
};