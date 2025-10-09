class Solution:
    def countPairs(self, arr):
        #code here 
        d ={}
        for i in range(len(arr)):
            if arr[i]-i not  in d :
                 d[arr[i]-i]=1
            else:
                 d[arr[i]-i] += 1
                 
        ans = 0 
        for  i in range(len(arr)):
            ans +=d[arr[i]-i]*( d[arr[i]-i]-1)

        return ans
    
a = Solution()
a.countPairs([1,2,3,4,6])