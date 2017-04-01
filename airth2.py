for _ in range(input()):
    op=[]
#    a=[]
    print
    string=raw_input()
    temp=string.replace(" ","")
    temp=temp.replace('=','')
    val=''
    counter=0
    for c in temp:
        # if(c=='='):
        #     continue
        if(c=='+' or c=='-' or c=='*' or c=='/'):
            op+=[c]
            temp=temp.replace(temp[counter],'|')
        counter+=1
#    print temp
    a=map(int,temp.split('|'))
#    print b
    # print a
    # print op
    result=0
    for i in range(len(a)-1):
        if(op[i]=='+'):
            if(i==0):
                result+=(a[i]+a[i+1])
            else:
                result+=a[i+1]
        elif(op[i]=='-'):
            if(i==0):
                result+=(a[i]-a[i+1])
            else:
                result-=a[i+1]
        elif(op[i]=='*'):
            if(i==0):
                result+=(a[i]*a[i+1])
            else:
                result*=a[i+1]
        elif(op[i]=='/'):
            if(i==0):
                result+=(a[i]/a[i+1])
            else:
                result=int(result/a[i+1])
    print result
