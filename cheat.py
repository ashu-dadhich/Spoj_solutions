import math
n=input()
ans=0;
for i in range(1,int(math.sqrt(n))):
    ans+=(n/i-i+1);
print ans
