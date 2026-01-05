#Implement binary search using divide and conquer
a = [1,2,3,4,5,6]
target = 5
left = 0
right = len(a)-1
while left<=right:
    
    print(a)
    mid = left+(right-left)//2 #middle index
    mid_e = a[mid] #middle element
    print(mid_e)
    if target == mid_e:
        print("Found")
        break
    elif target < mid_e:
        right = mid - 1
        
        
    else:
        left = mid + 1
else:
    print("target does not exist")    