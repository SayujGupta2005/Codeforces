a=input()
z=list(a.split('+'))
z.sort()
s=''
for i in range(0,len(z)):
    if i<len(z)-1:
        s+=z[i]+'+'
    else:
        s+=z[i]
print(s)