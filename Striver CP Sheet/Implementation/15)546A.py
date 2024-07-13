z=list(map(int, input().split()))
k=z[0] 
n=z[1]
w=z[2]
for i in range(2,w+1):
    k+=i*z[0]
if k-n>0:
    print(k-n)
else:
    print(0)