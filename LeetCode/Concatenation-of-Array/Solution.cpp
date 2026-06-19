1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans(nums.size()*2);
5        int k=0;
6        for(int i=0 ; i<nums.size() ; i++){
7            ans[i]=nums[i];
8            if(i==nums.size()-1){
9                for(int j=nums.size() ; j<nums.size()*2;j++){
10                    ans[j]=nums[k];
11                    k++;
12                }
13            }
14        }
15        return ans;
16    }
17};