# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l1_number_list = []
        l2_number_list = []
        l1_number_list.append(l1.val)
        l2_number_list.append(l2.val)
        l1_next_element = l1.next
        l2_next_element = l2.next
        while l1_next_element:
            l1_number_list.append(l1_next_element.val)
            l1_next_element = l1_next_element.next
        while l2_next_element:
            l2_number_list.append(l2_next_element.val)
            l2_next_element = l2_next_element.next
        sum1 = 0
        sum2 = 0
        for i in range(len(l1_number_list))[::-1]:
            sum1 = sum1 + l1_number_list[i]*10**i
        for i in range(len(l2_number_list))[::-1]:
            sum2 = sum2 + l2_number_list[i]*10**i
        total_sum = sum1 + sum2
        total_sum = str(total_sum)
        reverse_total_sum = total_sum[::-1]
        reverse_total_sum_list = []
        for element in reverse_total_sum:
            reverse_total_sum_list.append(int(element))
        create_node_list = [ListNode(x) for x in reverse_total_sum_list]
        for i in range(len(create_node_list)-1):
            create_node_list[i].next = create_node_list[i+1]
        return create_node_list[0]