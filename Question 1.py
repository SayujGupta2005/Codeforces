n=int(input())
i=0
k=0
while i<n:
    a=int(input())
    b=int(input())
    c=int(input())
    if(a+b+c>1):
        k=k+1
        i=i+1
    else:
        i=i+1
print(k)