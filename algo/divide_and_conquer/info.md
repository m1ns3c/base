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

### For Maximum:

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
