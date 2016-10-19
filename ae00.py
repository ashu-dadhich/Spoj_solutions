import math
n=input()
count=0;
for i in range(1,int(math.sqrt(n))+1):
    j=i+1
    while(i*j<=n):
        count+=1
        j+=1
count+=int(math.sqrt(n))
print count
