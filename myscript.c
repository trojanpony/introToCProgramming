#include <stdio.h>
#include <stdlib.h>
// complete the program by providing function definitions for make_array() and show_arry().
// the make_array() function takes two arguments. 
// The first is the number of elements of an int array, and the second is the avlue that is to be assigned to each element. 
// The funciton uses malloc() to create an array of a suitable size, sets each element to the indicated value, and returns a pointer to the array.
// The show_array() function displays the contents, eight numbers to a line. 

int * make_array(int elem, int val) {
  int * array = malloc(elem * sizeof(int));
  for (int i = 0; i < elem; i++) {
    array[i] = val;
  }
  return array;
}
void show_array(const int ar[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", ar[i]);
    if (i % 8 == 7) {
      printf("\n");
    }
  }
  printf("\n");
}

int main(void)
{
  int * pa;
  int size;
  int value;
  printf("Enter the number of elements: \n");
  while (scanf("%d", &size) == 1 && size > 0)
  {
      printf("Enter the initialization value: \n");
      scanf("%d", &value);
      pa = make_array(size, value);
      if (pa)
      {
          show_array(pa, size);
          free(pa);
      }
      printf("Enter the number of elements (<1 to quit): \n");
  }
  printf("Done.\n");
  return 0;
}
