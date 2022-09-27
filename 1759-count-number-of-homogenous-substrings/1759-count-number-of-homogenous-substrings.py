class Solution:
    def countHomogenous(self, s: str) -> int:
        c = 0
        t = 0
        flag = s[0]
        for i in s:
            if(i == flag):
                c += 1
                t += c
            else:
                c = 1
                t += 1
                flag = i
        return t%1000000007