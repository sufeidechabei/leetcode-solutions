class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows<=1)
        {
            return s;
        }
        int size = 2*numRows-2;
        string res="";
        for(int i=0; i<numRows; i++)
        {
            for (int j=i; j<s.length(); j+=size)
            {
                res = res + s[j];
                int tmp = j+size - 2*i;
                if(i!=0 && i!=numRows-1&&tmp<s.length())
                    res = res + s[tmp];
                
                
            }
        }
        return res;
                
    }

};