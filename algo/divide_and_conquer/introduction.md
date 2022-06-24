# Divide and Conquer Algorithm

DAC technique approach

1. Introduction to DAC
2. Algorithems under DAC techniques.
3. Recurrence Relation for DAC algorithm.
4. Problems using DAC technique.

## Divide and Conquer (D&C)

This technique can be divided into the following three parts:

- Divide: This involves dividing the problem into smaller sub-problems.
- Conquer: Solve sub-problems by calling recursively until solved.
- Combine: Combine the sub-problems to get the final solution of the whole problem. 

The following are some standard algorithms that follow Divide and Conquer algorithm.

1. `Quicksort` is a sorting algorithm. The algorithm picks a pivot element and rearranges the array elements so that all elements smaller than the picked pivot element move to the left side of the pivot, and all greater elements move to the right side. Finally, the algorithm recursively sorts the subarrys on the left and right of the pivot element.

2. `Merge Sort` is also a sorting algorithm. The algorithm divides the array into two halves, recursively sorts them, and finally merges the two sorted halves.

3. `Closest Pair of Points` The problem is to find the closest pair of points in a set of points in the x-y plane. The problem can be solved in `O(n^2)` time by calculating the distances of every pair of points and comparing the distances to find the minimum. The Divide and Conquer algorithm solves the problem in `O(N log N)` time.

4. `Strassen's Algorithm` is an efficient algorithm to multiply two matrices. A simple method to multiply two matrices needs 3 nested loops and is `O(n^3)`. Strassen's algorithm multiplies two matrices in `O(n^2.8974)` time.

5. `Cooley-Tukey Fast Fourier Transform (FFT) algorithm` is the most common algorithm for FFT. It is a divide and conquer algorithm which works in `O(N log N)` time.


What does not qualifies as Divide and Conquer:

Binary Search is a searching algorithm. In each step, the algorithm compares the input element x with the value of the middle element in the array. If the values match, return the index of the middle. Otherwise, if x is less than the middle element, then the algorithm recurs the left side of the middle element, else recurs for the right side of the middle element. Contrary to popular belief, this is not an example of Divide and Conquer because there is only one sub-problem in each step (Divide and Conquer requires that there must be two or more sub-problems) and hence this is a case of Decrease and Conquer.

## Divide And Conquer algorithm:

```
DAC(a, i, j)
{
    if (small(a, i, j))
        return (Solution(a, i, j))
    else
        m = divide(a, i, j) // f1(n)
        b = DAC(a, i, mid) // T(n/2)
        c = DAC(a, mid+1, j) // T(n/2)
        d = combine(b, c) // f2(n)
    return (d)
}
```

## Recurrence Relation for DAC algorithm:

This is a recurrence relation for the above program.

```
        O(1) if n is small
T(n) =  f1(n) + 2T(n/2) + f2(n)
```

### Approach

In this problem we are using a divide and conquer (DAC) which has three steps divide, conquer and combine. 

### For Maximum:

we are using the recursive approach to find the maximum where we will see that only two elements are left and then we can easily use condition i.e if(a[index]>a[index+1].)

```
if (index >= l-2)
{
    if (a[index] > a[index+1])
    {
        // (a[index]
        // Now, we can say that the last element will be maximum in a given array
    } else {
        // (a[index+1]
        // Now, we can say that last element will be maximum in a given array.
    }
}
```

in the above condition, we have checked the left side condition to find out the maximum. Now, we will see the right side condition to find the maximum.

Recursive function to check the right side at the current index of an array.

```
max = DAC_Max(a, index+1, l);
// Recursive call
```

In the given program, we are going to implement this logic to check the condition on the right side at the current index.

```
// Right element will be maximum.
if (a[index]>max)
{
    return a[index];
    // max will be maximum element in a given array.
} else {
    return max;
}
```

#### For minimum:

```
int DAC_Min(int a[], int index, int l)
// Recursive call function to find the minimum no. in a given array.
if (index>=l-2)
// to check the condition that there will be two-element in the left
// then we can easily find the minimum element in a given array.
{
    // have we will check the condition
    if (a[index]<a[index+1])
        return a[index];
    else
        return a[index+1];
}
```

Now, we call for the condition on the right side in a given array.

```
// Recursive call for the right side in the given array.
min = DAC_Min(a, index+1, l);
```

Now, we will check the condition to find the minimum on the right side.

```
// Right element will be minimum
if (a[index]<min)
    return a[index];
// Here min will be minimum in a given array.
else
    return min;
```

### Divide and Conquer (D & C) vs Dynamic Programming (DP)

Both paradigms (D&C and DP) divide the given problem into sub-problems and solve the sub-problems.

How do choose one of them for a given problem?

`Divide and Conquer` should be used when the same sub-problems are not evaluated many times.

Otherwise `Dynamic Programming` or `Memoization` should be used.

For example, Quicksort is a Divide and Conquer algorithm, we never evaluate the same sub-problems again.

On the other hand, for calculating the nth `Fibonacci` number, Dynamic Programming should be prefered.

### Advantages of Divide and Conquer Algorithm:

- The difficult problem can be solved easily.
- It divides the entire problem into sub-problems thus it can be solved parallelly ensuring multiprocessing
- Efficiently uses cache memory without occupying much space
- Reduces time complexity of the problem

### Disadvantages of Divide and Conquer Algorithm:

- It involves recursion which is sometimes slow
- Efficiency depends on the implementation of logic
- It may crash the system if the recursion is performed rigorously.
