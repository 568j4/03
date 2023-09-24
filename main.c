#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
   int a, b;
   float result;
   
   printf("Input the numerator: ");
   scanf("%d", &a);
   
   printf("Input the denominator: ");
   scanf("%d", &b);
   
   if(b==0) {
   	printf("The denominator cannot be 0.\n");
   }else{
   	result=(float)a/b;
   	printf("The result of the division is %f.\n", result);
   }
   return 0;
}
