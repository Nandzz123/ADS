1 #include <stdio.h>
  2 void swap(int *x, int *y)
  3 {
  4     int temp;
  5
  6     temp = *x;
  7     *x = *y;
  8     *y = temp;
  9 }
 10
 11 int main()
 12 {
 13     int a, b;
 14
 15     printf("Enter first number: ");
 16     scanf("%d", &a);
 17
 18     printf("Enter second number: ");
 19     scanf("%d", &b);
 20
 21     printf("Before swapping:\n");
 22     printf("a = %d\n", a);
 23     printf("b = %d\n", b);
 24
 25     swap(&a, &b);
 26
 27     printf("After swapping:\n");
 28     printf("a = %d\n", a);
 29     printf("b = %d\n", b);
 30
 31     return 0;
 32 }
~
