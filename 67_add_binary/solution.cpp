class Solution {
public:
    string addBinary(string a, string b) {
        auto len1 = a.length();
        auto len2 = b.length();
        int mini = min(len1, len2);
        vector<string> str_list;
        int add_data = 0;
        if (mini==0)
        {
            return "-1";
        }
        if(a.length()>=b.length())
        {
            int i = 0;
            int index_a, index_b, index; 
            int element;
            for( ; i<b.length(); i++)
            {
                   index_b = b.length()-i-1;
                   index_a = a.length()-i-1;
                  
                   element = (int)b[index_b]-48 +(int)a[index_a]-48 + add_data;
                   if(element==2)
                   {
                       add_data = 1;
                       element = 0;
                   }
                   else if(element==3)
                  {
                    add_data = 1;
                    element = 1;
                    
                   }
                   else
                   {
                       add_data = 0;
                   }
                   
                   str_list.push_back(std::to_string(element));
                
                            
                
            }
            for ( ; i<a.length(); i++)
            {
                index = a.length()-i-1;
                element = (int)a[index]-48 + add_data;
                if(element==2)
                   {
                       add_data = 1;
                       element = 0;
                   }
                
                else
                   {
                       add_data = 0;
                   }
                   
                str_list.push_back(std::to_string(element));
            }
            
        }
        
        if(a.length()<b.length())
        {
            int i = 0;
            int index_a, index_b, index;
            int element;
            for( ; i<a.length(); i++)
            {
                   index_a= a.length()-i-1;
                   index_b = b.length()-i-1;
                   element = (int)b[index_b]-48 +(int)a[index_a]-48 + add_data;
                   if(element==2)
                   {
                       add_data = 1;
                       element = 0;
                   }
                   else if (element==3)
                   {
                       add_data = 1;
                       element = 1;
                   }
                   else
                   {
                       add_data = 0;
                   }
                   
                   str_list.push_back(std::to_string(element));
                
                            
                
            }
            for ( ; i<b.length(); i++)
            {
                index = b.length()-i-1;
                int element = (int)b[index]-48 + add_data;
                if(element>=2)
                   {
                       add_data = 1;
                       element = 0;
                   }
                else
                   {
                       add_data = 0;
                   }
            
                
                   
                str_list.push_back(std::to_string(element));
                
            }
            
            
        }
        if (add_data>0)
                str_list.push_back("1");
        string result;
        result = accumulate(begin(str_list), end(str_list), result);
        reverse(result.begin(), result.end());
        return result;
    }
};