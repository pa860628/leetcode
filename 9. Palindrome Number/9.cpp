class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        bool check = true;
        vector<int> tmp;
        while(x)
        {
            int a = x%10;
            tmp.push_back(a);
            x = x/10;
        }
        for(int i = 0 , j = tmp.size()-1 ; i <tmp.size()/2 ; i++,j--)
        {
            if(tmp[i]!=tmp[j])
            {
                check = false;
                break;
            }
        }
        return check;
    }
};