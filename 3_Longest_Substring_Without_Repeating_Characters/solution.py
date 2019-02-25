class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        total_count_list = []
        total_element_list = [] 
        for element in s:
            total_element_list.append(element)
        for x in range(len(total_element_list)):
            substring = total_element_list[x:]
            first_element = substring[0]
            substring_element_list = []
            substring_element_list.append(first_element)
            for element in range(1, len(substring)):
                if substring[element]  in substring_element_list:
                    break;
                substring_element_list.append(substring[element])
            total_count_list.append(len(substring_element_list))
        if len(s)==0:
            return 0
        return max(total_count_list)