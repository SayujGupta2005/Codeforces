n=int(input())
a=0
b=0
min=0
for i in range(n):
    x,y=input().split()
    a+=int(x)
    b+=int(y)
    r=b-a
    if r>min:
        min=r
print(min)