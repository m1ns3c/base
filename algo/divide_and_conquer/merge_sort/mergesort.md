# Merge Sort

an example of the divide and conquer strategy.

in this algorithm, the array is initially divided into two equal halves an then they are combined in a sorted manner.

We can think of it as a recursive algorithm that continously splits the array in half until it cannot be further divided.


## Pseudocode:

- Declare left variable to 0 and right variable to  n-1
- Find mid by medium formula. mid = (left+right)/2
- Call merge sort on (left,mid)
- Call merge sort on (mid+1, right)
- Continue till left is less than right
- Then call merge function to perform merge sort.

## Algorithm:

- step 1: start
- step 2: declare array and left, right, mid variable
- step 3: perform merge function.
       	  mergesort(array, left, right)
	  if left > right
	  return
	  mid = (left+right)/2
	  mergesort(array, left, mid)
	  mergesort(array, mid+1, right)
	  merge(array, left, mid, right)
- step 4: stop
