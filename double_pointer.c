#include <stdio.h>
int main() {
   int v = 76;
   int *p1; //   Declare a pointer p1 of the integer datatype.
   int **p2; //   Declare another double pointer p2 of the integer datatype.
   p1 = &v; //    Initialize p1 as the pointer to variable v.
   p2 = &p1; //    Initialize p2 as the pointer to variable p1.
   printf("Value of v = %d\n", v);  //       Print the value of variable v.
   printf("Value of v using single pointer = %d\n", *p1 );  //      Print the value of pointer p1.
   printf("Value of v using double pointer = %d\n", **p2); //       Print the value of double pointer p2.
   return 0;
}


