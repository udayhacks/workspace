for _ in range(int(input())):
    s = input()
    if len(s)<=10 :
        print(s)
    else:
        s = ''.join([s[0],str(len(s)),s[len(s)-1]])
        print(s)
    