a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=list(map(int,input().split()))
d=list(map(int,input().split()))
e=list(map(int,input().split()))
if 1 in a:
    z=a.index(1)
    k=2+abs(2-z)
elif 1 in b:
    z=b.index(1)
    k=1+abs(2-z)
elif 1 in c:
    z=c.index(1)
    k=abs(2-z)
elif 1 in d:
    z=d.index(1)
    k=1+abs(2-z)
elif 1 in e:
    z=e.index(1)
    k=2+abs(2-z)
print(k)