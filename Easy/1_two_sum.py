"""
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.
You can return the answer in any order.
"""


class Solution:
    """
    Solution class for two_sum exercise
    """
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        """
        Function that returns index of integers that sums target
        :param nums: list of integers
        :param target: integer to find elements that they add up
        :return: list of integers with index of the two elements
        """
        numbers_index: list[int] = []
        if len(nums) < 2:
            print("please check the length of your list")
        else:
            # O(n^2): force brute w/ double for, if x+y = target
            my_dict: dict[int, int] = {}
            for i, number in enumerate(nums):
                second_number = target - number
                if second_number in my_dict:
                    second_index = nums.index(second_number)
                    if i != second_index:
                        numbers_index.extend([i, second_index])
                        numbers_index.sort()
                my_dict.update({number: i})
        return numbers_index
