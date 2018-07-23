class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        while(x)
        {
            int a = x % 10;
            ans = ans*10 + a;
            x = x / 10;
            if(ans>(signed int)0x7fffffff||ans<(signed int)0x80000000)
                return 0;
        }
        return ans;
    }
};