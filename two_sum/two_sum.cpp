#include<algorithm>
using namespace::std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int count=0;
       vector<int>a;
       for(auto c:nums)
       {
           auto result=find(nums.begin(),nums.end(),target-c);
           if(result!=nums.end())
           {
               if(count==result-nums.begin())
               {
                   count++;
                   continue;
               }
                   
               a.push_back(count);
               a.push_back(result-nums.begin());
               return a;
               
               
               
           }
           else
           {
               count++;
               continue;
           }
              
          
               
           
       }
       return a;
       
        
        
    }
};