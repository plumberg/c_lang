#include <stdio.h>
#include <stdlib.h>

//typedef int CMPR_F(void *, void *);

int int_compare_to(const void *one ,const void *two)
{
   int *po = (int *)one;
   int first = *po;

   int *pt = (int *)two;
   int second = *pt;
	
   return first > second ? 1
        : first == second ? 0 
        : -1;
}


int dbl_compare_to(const void *one ,const void *two)
{
   double first = *((double *)one);
   int second = *((double *)two);
	
   return first > second ? 1
        : first == second ? 0 
        : -1;
}

int main(int argc, char *argv[])
{
   int arr[] = {1,4,6,2,8,2,9,3,11,-2,5};
   int size = sizeof(arr)/sizeof(arr[0]);  

   for (int ix=0;ix<size;++ix)
   {
      printf("arr[%d] = %d\n", ix, arr[ix]);
   }
  
   printf("\n\nsorted:");
   qsort((void *)arr,(size_t)size,sizeof(int),int_compare_to);


   for (int ix=0;ix<size;++ix)
   {
      printf("arr[%d] = %d\n", ix, arr[ix]);
   }

   double darr[] = {1.0,3.0,5.0,7.0,8.0,6.0,4.3,2.2,11};

   size = sizeof(darr)/sizeof(darr[0]); 
   for (int ix=0;ix<size;++ix)
   {
      printf("darr[%f] = %f\n", ix, darr[ix]);
   }
   printf("\n\nsorted:\n");
   qsort((void *)darr,(size_t)size,sizeof(double),dbl_compare_to);


   for (int ix=0;ix<size;++ix)
   {
      printf("darr[%f] = %f\n", ix,darr[ix]);
   }
return 0;
}



































