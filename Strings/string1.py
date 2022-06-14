usr_name="satwi"
#input("enter username")
frds=["sahi","satnnni","manvi"]
#list(input("enter frds list :").split(' '))
count=0
max_count=0
n=0
usr_name_list=(usr_name[0:])
print(frds)
for c in frds:
    for i in usr_name_list:
        if(c.find(i)!=-1):
            count=count+1
            if  count>max_count:
                max_count=count
    count=0

    
    
print(max_count)