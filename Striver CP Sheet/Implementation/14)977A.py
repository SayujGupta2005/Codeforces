x,y=input().split()
a=int(x)
b=int(y)
for i in range(0,b):
    if int(x[-1])>0:
        a-=1
        x=str(a)
    elif int(x[-1])==0:
        a=a//10
        x=str(a)
print(a)