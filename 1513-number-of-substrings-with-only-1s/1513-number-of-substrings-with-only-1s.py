class Solution:
    def numSub(self, s: str) -> int:
        sum = 0
        c = 0
        flag = True
        if(s[0] is '0'):
            flag = False
        for i in s:
            if(i == '1'):
                flag = True
                c += 1
            else:
                sum += (c*(c+1))/2 % 1000000007
                c = 0
                flag = False
        sum += (c*(c+1))/2 % 1000000007
        return int(sum)
        