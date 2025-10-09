                     
import math
def checkPrime(n,l):
    cnt = 0
    
     
            
            
    if cnt == 0:    
        for i in range(1, int(math.sqrt(n)) + 1):
            if n % i == 0:
                if n // i != i:
                    cnt = cnt + 1
        if cnt  ==2:
            l.append(n)
        




l = []
for i in range(2,100) :
    
    checkPrime(i,l)
print(l)