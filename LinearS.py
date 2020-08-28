def linearsearch(arr, x):
   for i in range(len(arr)):
      if arr[i] == x:
         return i
   return -1 #returns -1 when element not found


arr = [1,4,79,3,34,37,68]
x = 34  #element to search for
if linearsearch(arr,x) != -1:  #returns -1 when element not found
	print("element found at index "+ str(linearsearch(arr,x)))
else:
	print("element not found")