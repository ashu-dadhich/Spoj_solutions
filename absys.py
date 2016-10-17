for _ in range(input()):
    print
    x=raw_input()
    values,result=x.split('=')
    a,b=values.split('+')
    if('m' in result):
        a=int(a)
        b=int(b)
        ans=a+b
        print a,'+',b,'=',ans
    else:
        if('m' in a):
            result=int(result)
            b=int(b)
            a=result-b
            print a,'+',b,'=',result
        else:
            result=int(result)
            a=int(a)
            b=result-a
            print a,'+',b,'=',result
