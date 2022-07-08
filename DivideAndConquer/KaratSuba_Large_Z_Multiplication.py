// Got 2 differnt ways. One is starught forwar wihtout this zeropad thingis

def karatsuba(x,y):
	"""Function to multiply 2 numbers in a more efficient manner than the grade school algorithm"""
	if len(str(x)) == 1 or len(str(y)) == 1:
		return x*y
	else:
		n = max(len(str(x)),len(str(y)))
		nby2 = n / 2
		
		a = x / 10**(nby2)
		b = x % 10**(nby2)
		c = y / 10**(nby2)
		d = y % 10**(nby2)
		
		ac = karatsuba(a,c)
		bd = karatsuba(b,d)
		ad_plus_bc = karatsuba(a+b,c+d) - ac - bd
        
        	# this little trick, writing n as 2*nby2 takes care of both even and odd n
		prod = ac * 10**(2*nby2) + (ad_plus_bc * 10**nby2) + bd

		return prod

print(karatsuba(10,10))


#Return the string with zeros added to the left or right.

import xxlimited


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
        y=zeroPad(y,len(xxlimited)-len(y))

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