class Solution:
  
    def medianOf2(self, a, b):
        n = len(a)
        m = len(b)
        if n ==1 and m ==1 :
            return (a[0]+b[0])/2
        t = n+m
        k = (t//2)+1
        i = 0 
        j = 0
        prev = next = 0 
        
        for f in range(k):
            if i < n  and a[i] <= b[j]:
                prev = next 
                next = a[i]
                i+=1
            else:
                if j < m :
                    prev = next 
                    next = b[j]
                    j+=1
                    
        if t %2== 0 :
            return (prev+next)/2
        else:
            return next
                
     
        

    
s = Solution()
a = [-5]
b =  [-7,-6]


l = s.medianOf2(a,b)
print(l)