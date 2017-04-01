while(1):
    n=input()
    if(n==0.00):
        break
    else:
        sum=0
        count=0
        i=2.00;
        while(1):
            if(sum>=n):
                break
            else:
                sum+=1/i
                i+=1
                count+=1
                #print 1/i
        print count,"card(s)"
