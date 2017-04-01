while(1):
    n=input();
    if(n==0):
        break
    else:
        a=[]
        a=map(int,raw_input().split())
        queue=[]
        stack=[]
        for i in range(n):
            if(i==n-1):
                queue+=[a[i]]
            else:
                if(len(stack)==0 and len(queue)==0 and a[i]>stack[0] and stack[0]<queue[0]):
                    queue+=[stack[0]]
                    stack.pop(0)
                    queue+=[a[i]]
                elif(a[i]<a[i+1]):
                    queue+=[a[i]]
                else:
                    stack+=[a[i]]
        for i in queue:
            print queue
