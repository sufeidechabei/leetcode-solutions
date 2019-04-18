class Solution {
public:
    bool isPalindrome(int x) {
        
        string x1= to_string(x);
        string x2 = x1;
        std::reverse(x1.begin(), x1.end());
        for(int i=0; i<x1.length(); i++)
        {
            if (x1[i]!=x2[i])
            {
                return false;
            }
        }
        return true;
        
    }
};