
def fact(n):
    if n == 0:
        return 1
    else:
        return n * fact(n-1)%1000000007

def fast_power(a,b,c):
    
    temp=fact(b)/(fact(c)*fact(b-c))%1000000007
    result=pow(a,temp)
    return result%1000000007
    


t=input()
t=int(t)
for i in range(t):
    a=input()
    a=int(a)
    b=input()
    b=int(b)
    c=input()
    c=int(c)
    print (fast_power(a,b,c))%1000000007
