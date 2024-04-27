class Solution {
public:
//T(C(N)==O(N)) and S(C(N)==O(N)) as It requries Non Conitiguous Space allocation Iteratively
void subs(vector<int>& nums, vector<vector<int>>& res, vector<int>& sub, int idx) {//Subset elements Funct declare
        int l=nums.size();//Num's Size Declare
        res.push_back(sub);//Inserting Nums's Elements
        for(int i=idx;i<l;i++){//Iterating through Nums's size
            if(i!=idx && nums[i]==nums[i-1])continue;//checking 1st and EndIng elements Uniquely
            sub.push_back(nums[i]);//Inserting Nums's Subsets 
            subs(nums, res, sub,i+1);//Sequencing the Nums's subsets 
            sub.pop_back();//Deallocating Non Unique Nums's Subsets elements
        }return;}//Printing Subsets
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {//Checking Subsets Uniquely 
        vector<int> sub;//Subset Vector Declare
        sort(nums.begin(),nums.end());//Sorting the 1st and Ending Nums's Elements
        vector<vector<int>> res;//Output Declare
        subs(nums, res, sub, 0);//Subset declare
        return res;}};//Printing the Output
