#include <stdio.h>

int DAC_Max(int a[], int index, int l);
int DAC_Min(int a[], int index, int l);

// function to find the maximum no. in a given array
int DAC_Max(int a[], int index, int l) {
  if (index >= l-2) {
    if (a[index] > a[index+1]) {
      return a[index];
    } else {
      return a[index+1];
    }
  }

  int max = DAC_Max(a, index+1, l);

  if (a[index] > max) {
    return a[index];
  } else {
    return max;
  }
}

// function to find the minimun no. in a given array
int DAC_Min(int a[], int index, int l) {
  if (index >= l-2) {
    if (a[index] > a[index+1]) {
      return a[index+1];
    } else {
      return a[index];
    }
  }

  int min = DAC_Min(a, index+1, l);

  if (a[index] > min) {
    return min;
  } else {
    return a[index];
  }
}

int main(void) {
  int len, max, min;

  int elements[] = {10, 59, 32, 101, 97, 4, 28, 11, 39};
  len = sizeof(elements) / sizeof(int);

  max = DAC_Max(elements, 0, len);
  min = DAC_Min(elements, 0, len);

  printf("The maximum no. in a given array is: %d\n", max);
  printf("The minimum no. in a given array is: %d\n", min);

  printf("%d %d %d\n", sizeof(elements), sizeof(int), len);

  return 0;
}
