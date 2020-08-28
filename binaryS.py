def binarySearchAppr (arr, start, end, x):
	if end >= start:
		mid = start + (end- start)//2
		if arr[mid] == x:
			return mid
		elif arr[mid] > x:
			return binarySearchAppr(arr, start, mid-1, x)
		else:
			return binarySearchAppr(arr, mid+1, end, x)
	else:
		return -1

arr = [5, 6, 7, 23, 24, 32, 34, 76]
#      0  1  2   3   4   5   6   7  indices
x =  6  # element to search
result = binarySearchAppr(arr, 0, len(arr)-1, x)
if result != -1:
	print ("element found at index "+ str(result))
else:
	print ("element not found")