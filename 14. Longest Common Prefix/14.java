class Solution {
    public String longestCommonPrefix(String[] strs) {
        String ans = "" ;
        String tmp = "";
        if(strs.length == 0)
            return ans;
        for(int i = 0 ; i < strs[0].length() ; i++)
        {
            boolean check = true;
            tmp += strs[0].charAt(i);
            for(int j = 0 ; j < strs.length ; j++)
            {
                if(strs[j].indexOf(tmp)!=0)
                {
                    check = false;
                    break;
                }
            }
            if(!check)
                break;
            else
                ans = tmp;
        }
        return ans;
    }
}