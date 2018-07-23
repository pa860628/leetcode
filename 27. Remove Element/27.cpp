class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i]==val)
            {
                int count = 0;
                for( int j = i; j < nums.size() ;j++)
                {
                    if(nums[j]!=val)
                        break;
                    else
                        count++;
                }
                for(int k = i ; k < nums.size()-count;k++)
                {
                    nums[k] = nums[k+count];
                }
                nums.resize(nums.size()-count);
            }
        }
        int num = nums.size();
        return num;
    }
};