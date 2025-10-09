
class Solution:
    def kthSmallest(self, arr,k):
    
        """    
        arrS= sorted(arr[:k])        
        for i in range(k, len(arr)) :
            for j in range(k-1,-1,-1) :  
                if arrS[j] < arr[i] :
                    break
                elif (arrS[j] > arr[i])  and (j > 0 and arrS[j-1] > arr[i]) :
                    arrS[j]  = arrS[j-1]
                    
                else:
                    arrS[j] = arr[i]
                    break
                
                
            
        return arrS[-1]  
        
"""
        import heapq
        heapq.heapify(arr)
        for i in range(k):
            o = heapq.heappop(arr)
        return o



        
a = Solution()
arr = [8, 6 ,7 ,4 ,9, 0,3 ,2 ,5 ,11]
k = 4
o =a.kthSmallest(arr,k)
print(o)
