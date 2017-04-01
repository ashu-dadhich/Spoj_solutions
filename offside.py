while(1):
    temp=[]
    temp=map(int,raw_input().split())
    att=temp[0]
    defe=temp[1]
    if(att==0 and defe==0 ):
        break
    else:
        a=[]
        d=[]
        a=map(int,raw_input().split())
        d=map(int,raw_input().split())
        mina=min(a)
        d.remove(min(d))
        minb=min(d)
        if(minb<=mina):
            print "N"
        else:
            print "Y"
