class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        a = [1] * (rowIndex+1)
        
        for i in range(2,rowIndex+1):
            for j in range(1,i):
                a[i-j] += a[i-j-1]
        return a
    
    
