""""#User function Template for python3
class Solution:
    def subarraySum(self, arr, target):
        # code here
        
        
        s = i = j = 0
        
        while i >=0 and j <len(arr) :
            
            s += arr[j] 
            
            if s == target :
                return [i+1,j+1] 
            ss = s
            
            while ss > target and i >= 0 and ss > 0 :
                ss-=arr[i]
                i+=1
                if ss == target :
                    return [i+1,j+1]
                
            j+=1
            
        
        return [-1 ]  
        
        
        
        
"""
    

class Solution:
    def subarraySum(self, arr, target):
        # code here
        
        
        s = i = j = 0
        
        while i >= 0 and j <len(arr) :
            
            s += arr[j] 
            
            if s == target :
                return [i+1,j+1] 
            
            while s > target :
                s-=arr[i]
                i+=1
                if s == target :
                    return [i+1,j+1]
                
            j+=1
            
        
        return [-1 ]       
                
                
a = Solution ()
k = [1, 2, 3, 7, 5]
target = 12

print(a.subarraySum(k,target))