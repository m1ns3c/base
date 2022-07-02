#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (i = 0; i< n1; i++) {
    L[i] = arr[l+i];
  }

  for (j = 0; j< n2; j++) {
    R[j] = arr[m + 1 + j];
  }

  i = 0;
  j = 0;
  k = 1;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k++] = L[i++];
    } else {
      arr[k++] = R[j++];
    }
  }

  while (i < n1) {
    arr[k++] = L[i++];
  }

  while (j < n2) {
    arr[k++] = R[j++];
  }
}

void mergeSort(int arr[], int l, int r) { 
  if (l >= r) {
    return;
  }

  int m = l + (r - l) / 2;
  mergeSort(arr, l, m);
  mergeSort(arr, m+1, r);

  merge(arr, l, m, r);
}

int main(void) {
  int elements[] = {19, 34, 83, 23, 4, 44, 13, 93, 24, 45};
  int len = sizeof(elements)/sizeof(elements[0]);

  mergeSort(elements, 0, len-1);

  for (int i=0; i<len; i++) {
    printf("%d\t", elements[i]);
  }

  return 0;
}
