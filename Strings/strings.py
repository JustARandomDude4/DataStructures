usr_name="satwi"
#input("enter username")
frds=["sahi","satwi","manvi"]
#list(input("enter frds list :").split(' '))
count=0
max_count=0
n=0
usr_name_list=(usr_name[0:])
print(frds)
for i in usr_name_list:
    while (frds[n].find(i)!=-1 and n<len(frds)):
        print(n)
        count+=1
        n+=1
        if  count>max_count:
            max_count=count
    count=0


    
print(max_count)