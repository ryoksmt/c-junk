#include <stdio.h>
#include <stdlib.h>
#include "./swap/swap.c"

extern void swap (int *x, int *y);

int main () {
   // for swap
   int swap_arr[2];
   swap_arr[0] = 0;
   swap_arr[1] = 1;

   printf("%d,%d\n",swap_arr[0], swap_arr[1]);
   swap(&swap_arr[0], &swap_arr[1]);
   printf("%d,%d\n",swap_arr[0], swap_arr[1]);

   int a = 9;
   int b = 8;
   printf("%d,%d\n",a, b);
   swap(&a, &b);
   printf("%d,%d\n",a, b);
   return 0;
}
