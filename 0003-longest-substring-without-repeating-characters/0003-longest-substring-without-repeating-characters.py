class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sub_set = []
        longest_length = 0
        for char in s:
            while char in sub_set:
                sub_set.remove(sub_set[0])
            sub_set.append(char)
            if len(sub_set) > longest_length:
                longest_length = len(sub_set)
        return longest_length
