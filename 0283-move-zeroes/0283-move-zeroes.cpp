class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==0||nums.size()==1)
        {
            return ;
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==0)
            {
                int j =i;
                while(nums[j]==0&&j<nums.size()-1)
                {
                    j++;

                }
                swap(nums[i],nums[j]);
            }
        }
    }
};