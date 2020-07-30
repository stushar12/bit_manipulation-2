#include <stdio.h>
int main()
{
  int arr[] = {4, 1, 3, 2, 1, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int res = arr[0];
  for (int i = 1; i < n; i++)
  {
    res = res ^ arr[i];
  }
  printf("Unique element is = %d", res);
}
