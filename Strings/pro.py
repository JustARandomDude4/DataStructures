array= list(map(int,input().split(' ')))

print(array)
n=len(array)
    #len is odd, then len/2-odd  len/2 +1 -even
for j,i in enumerate(array):
    print(i,j)
    if i%2==0 and j%2==0  or i%2!=0 and j%2!=0 : 
        print('ntg')
    else:
        i,array[n-j-1]=array[n-j-1],i

print(array)



