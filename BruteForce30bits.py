from timeit import default_timer as timer

#loop with 2**m rounds
m=30
start=timer()
j=0
while j<2**m:
    #try with key k_j
    print(j)
    j+=1
end=timer()
#print the totle time employed to check all keys
print(m, (end-start)/60, "minutes") #Timer in minutes