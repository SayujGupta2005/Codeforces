n=input()
count=0
for i in range(len(n)):
    if n[i]=='4' or n[i]=='7':
        count+=1 
a=['4','7']
b=list(str(count))
s=1
for z in b:
    if z in a:
        continue
    else:
        print('NO')
        s-=1
        break
if s==1:
    print('YES')
    