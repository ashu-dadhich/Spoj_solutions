for _ in range(input()):
    x=raw_input()
    temp=0
    if('+' in x):
        a,b=x.split('+')
        temp=1
        a=int(a)
        b=int(b)

    elif('*' in x):
        a,b=x.split('*')
        temp=2
        a=int(a)
        b=int(b)

    elif('-' in x):
        a,b=x.split('-')
        temp=3
        a=int(a)
        b=int(b)

    if(temp==1):
        t_sum=a+b
        b1='+'
        b1+=str(b)
        lb1=len(b1)
        print '',a
        print b1
        print '-'*lb1
        print '',t_sum

    elif(temp==3):
        t_minus=a-b
        b1='-'
        b1+=str(b)
        lb1=len(b1)
        print '',a
        print b1
        print '-'*lb1
        print '',t_minus

    elif(temp==2):
        t_mult=a*b
        b1='*'
        b1+=str(b)
        la=len(str(a))
        lb1=len(b1)
        lr=len(str(t_mult))
        if(lr-la==0):
            print ' '+str(a)
        else:
            print ' '*(lr-la)+str(a)
        print ' '*(lr-lb1)+str(b1)
        print ' '*(lr-lb1)+'-'*lb1
        counter=0
        temp_b=str(b)[::-1]
        for i in temp_b:
            p_mult=a*int(i)
            lp=len(str(p_mult))
            if(len(temp_b)==1):
                break
            print ' '*(lr-lp-counter)+str(p_mult)
            counter+=1
        if(len(temp_b)==1):
            print ' '*(lr-lp+1)+str(p_mult)
            continue
        print '-'*lr
        print t_mult
