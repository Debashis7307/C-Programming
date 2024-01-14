
#include <stdio.h>

void merge(int arr1[], int arr2[], int arr3[], int n1, int n2) {
  int i = 0, j = 0, k = 0;
  while (i < n1 && j < n2) {
    if (arr1[i] <= arr2[j]) {
      arr3[k] = arr1[i];
      k++,i++;
    } else {
      arr3[k] = arr2[j];
      k++,j++;
    }
  }

  while (i < n1) {
    arr3[k] = arr1[i];
    k++,i++;
  }

  while (j < n2) {
    arr3[k] = arr2[j];
    k++,j++;
  }
}

int main() {
  int n1, n2;
  printf("1st array size:\n");
  scanf("%d", &n1);

  int arr1[n1];
  printf("1st array elements:\n");
  for (int i = 0; i < n1; i++) {
    scanf("%d", &arr1[i]);
  }

  printf("2nd array size:\n");
  scanf("%d", &n2);

  int arr2[n2];
  printf("2nd array elements:\n");
  for (int i = 0; i < n2; i++) {
    scanf("%d", &arr2[i]);
  }

  int arr3[n1 + n2];
  merge(arr1, arr2, arr3, n1, n2);

  for (int i = 0; i < n1 + n2; i++) {
    printf("%d ", arr3[i]);
  }

  printf("\n");

  return 0;
}

