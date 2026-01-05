a = [1,2,3,4,5]
x = 4
prev = a[0]
next = a[-1]
while prev<=next:
    s = prev + next 
    if (s==x):#x
        break
    elif (s<x):
        prev += 1
    else:
        next -= 1
print(prev,next)

'''
#with for loop
for i in range(len(a)):
    if prev>=next:
        break
    s = prev + next
    if (s==x):
        print(prev,next)
        break
    elif(s<x):
        a = a[1:] #remove first element
    else:
        a = a[:-1] #remove last element
'''