x=list(map(int,input().split()))
a=x[0]
b=x[1]
i=1
while i>0:
    if 3*i*a>2*i*b:
        print(i)
        break
    else:
        a=3*i*a 
        b=2*i*b
        i+=1