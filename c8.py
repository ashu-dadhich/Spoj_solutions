import math
x=pow(10,18)
i=1
while(i<10000):
    temp=i*i*i;
    t=str(temp)
    if(len(t)>=3):
        if(t[-1]==t[-2]==t[-3]=='8'):
            print temp,i
    i+=1
