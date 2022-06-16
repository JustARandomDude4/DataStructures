towers=[3,7,1,6,9,12,2]
strength=3
towers.sort()
print(towers)
max_count=0
max_count_tower=towers[0]
count=0
num_towers=1
for i,j in enumerate(towers):
    towers_possible=[j-2,j-1,j,j+1,j+2]
    if j-3 in towers:
        count+=1
    if j-2 in towers:   
        count+=1
    if j-1 in towers:
        count+=1        
    if j+3 in towers:
        count+=1
    if j+2 in towers:
        count+=1
    if j+1 in towers:
        count+=1

    if count==len(towers):
        break
    else:
        num_towers+=1

print(num_towers)
