#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000000
#define FIND -1

int binsearch(int x, int* v, int n) {
  int low, mid, high;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid]) {
      high = mid - 1;
    } else if (x > v[mid]) {
      low = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
}

int my_binsearch(int x, int* v, int n) {
  int low, mid, high;

  low = 0;
  high = n - 1;
  while (low != high) {
    mid = (low + high) / 2 + 1;
    if (x < v[mid]) {
      high = mid - 1;
    } else {
      low = mid;
    }
  }

  return x == v[low] ? low : -1;
}

int main() {
  int v[MAX];
  for (int i = 0; i < MAX; i++) {
    v[i] = i;
  }

  printf("v[] is [0, 1, 2, ..., %d]\n", MAX - 1);
  int begin = clock();
  int end = clock();
  printf("get index of num %d by my_binsearch() is: %d, cost time is: %dms\n",
         FIND, binsearch(FIND, v, MAX), end - begin);
  begin = clock();
  end = clock();
  printf("get index of num %d by binsearch() is: %d, cost time is: %dms\n",
         FIND, binsearch(FIND, v, MAX), end - begin);
}
