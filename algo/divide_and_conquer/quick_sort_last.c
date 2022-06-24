#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int low, int high) {
  int i, j, pivot;

  pivot = arr[high];

  i = low - 1;

  for (j = low; i<high -1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i+1], &arr[high]);

  return i+1;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    quickSort(arr, low, pi-1);
    quickSort(arr, pi+1, high);
  }
}


int main(void) {
  int elements[] = {9, 199, 80, 34, 67, 98, 12, 23, 80, 2};
  int len = sizeof(elements) / sizeof(int);

  printf("%d\n", len);

  quickSort(elements, 0, len - 1);

  for (int i=0; i<len;i++) {
    printf("%d\t", elements[i]);
  }

  return 0;
}
