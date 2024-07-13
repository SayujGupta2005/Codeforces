n=int(input())
x=0
z=0
while z<n:
    z+=1
    a=input()
    if a=='X++' or a=='++X':
        x+=1
    elif a=='--X'or a=='X--':
        x-=1
    
print(x)