# QuickSort

Like `Merge Sort`, QuickSort is Divide and Conquer algorithm, It picks an element as pivot and partitions the given array around the picked pivot.

There are many different versions of quicksort that pick pivot in different ways.

- Always pick first element as pivot.
- Always pick last element as pivot.
- Pick a random element as pivot.
- Pick median as pivot.

The key process in quicksort is partition().

Target of partitions is, given an array and an element x of array as pivot, put x its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x.

All this should be done in linear time.

## Partition Algorithm:

we recursively perform three steps:

- 1. Bring the pivot to its apropriate position such that left of the pivot is smaller and right is greater.
- 2. Quick sort the left part.
- 3. Quick sort the right part.

```
/* low -> Starting index, high -> Ending index */
quickSort(arr[], low, high) {
    if (low < high) {
        /* pi is partitioning index, arr[pi] is now at right place */
        pi = partition(arr, low, high);
        quickSort(arr, low, pi-1); // Before pi
        quickSort(arra, pi+1, high); // After pi
    }
}

/*
This function takes last element as pivot, place the pivot element at its correct position in sorted array,
and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot.
*/
partition(arr[], low, high) {
    // pivot (Element to be placed at right position)
    pivot = arr[high];
    i = (low - 1) // Index of smaller element and indicates the right position of pivot found so far
    
    for (j=low; j<=high-1; j++) {
        // if current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increament index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i+1] and arr[high]
    return (i+1)
}
```
