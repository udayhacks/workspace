ans = 0 
i = 0 
j = 0 
k  =0 

a1 = "abcd"
a2 = "ace"
a3 = "aec"

a1 = list(a1)
a2 = list(a2)
a3 = list(a3)


while i < len(a1) and j < len(a2) and k< len(a3) :
    if a1[i] == a2[j] and a1[j] == a3[k] :
        i+=1
        j+=1
        k+=1
        ans+=1
        
        
    else:
        i+=1
        
    

print(ans)