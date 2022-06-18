
#Return the string with zeros added to the left or right.

def zeroPad(numberString, zeros, left = True):
    for i in range(zeros):
        if left:
            numberString = '0' + numberString
        else:
            numberString = numberString + '0'
    return numberString

def karatSM(x,y):
    a=str(x)
    b=str(y)

#base case for recursion
    if len(x)==1 and len(y)==1:
        return int(x)*int(y)
    if len(x) <len(y):
        x=zeroPad(x,len(y)-len(x))
    elif len(y) < len(x):
        y=zeroPad(y,len(y)-len(y))

    n=len(x)
    j=n//2

#for odd digit z
    if(n%2)!=0:
        j+=1
        
 #No of zeroes to be added to A  
    BZeroPadding = n - j     
 #No of zeroes to be added to B
    AZeroPadding = BZeroPadding * 2

    a=int(x[:j])
    b=int(x[j:])
    c=int(y[:j])
    d=int(y[j:])

    ac = karatSM(a, c)

    bd = karatSM(b, d)

    k = karatSM(a + b, c + d)

    A = int(zeroPad(str(ac), AZeroPadding, False))

    B = int(zeroPad(str(k - ac - bd), BZeroPadding, False))

    return A + B + bd