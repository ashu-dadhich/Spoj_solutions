t_case=input()
while(t_case>0):
    sum=0
    num=input()
    x=int(num/5)
    while(1):
        if(x==0):
            break
        sum=sum+x
        x=int(x/5)
    print sum
    t_case-=1
