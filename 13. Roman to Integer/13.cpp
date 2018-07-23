class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char,int> m;
        m.insert(make_pair('I',1));
        m.insert(make_pair('V',5));
        m.insert(make_pair('X',10));
        m.insert(make_pair('L',50));
        m.insert(make_pair('C',100));
        m.insert(make_pair('D',500));
        m.insert(make_pair('M',1000));
        for(int i = 0 ; i<s.length();)
        {
            if(m[s[i]]<m[s[i+1]])
            {
                ans += m[s[i+1]]-m[s[i]];
                i+=2;
            }
            else
            {
                ans += m[s[i]];
                i+=1;
            }
        }
         return ans;
    }
};