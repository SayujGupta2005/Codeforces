x=list(str(input()))
y=list(map(str,input().split()))
count=True
for _ in y:
    if (x[0] in _) or (x[1] in _):
        print('YES')
        count=False
        break
if count==True:
    print('NO')
    