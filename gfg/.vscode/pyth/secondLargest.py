
class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        
        
        
        first = second = arr[0] 
        
        for i in range(len(arr)) :
            if first > arr[i]  :
                second = first 
                first = arr[i]
                
            elif (first > arr[i] and second < arr[i]):
                second = arr[i]
                
        if first == second :
            return -1
        return second 
    
    
    
a = [12,35,1,10,34,1]

k = Solution()
k.getSecondLargest(a)