x,y=input().split()
x=int(x)
y=int(y)
r='.'*(y-1)
for _ in range(x):
    if _&1==0:
        for i in range(y):
            print('#',end='')
    else:
        if ((_-1)//2)&1==0:
            print(r,end='')
            print('#',end='')
        else:
            print('#',end='')
            print(r,end='')
    print('')                                                                      