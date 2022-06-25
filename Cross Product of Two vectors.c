#include <stdio.h>
   #include <stdlib.h>
   int d,e,f;
   int A[3],B[3];
   int sum = 0;
   int i;


int main()
{
printf("Enter i,j,k components of vector v1\n");
  for(i=0;i<3;i++)
 {
    scanf("%d",&A[i]);
 }
 printf("Enter i,j,k components of vector v2\n");
 for(i=0;i<3;i++)
  {
    scanf("%d",&B[i]);
  }

   d=A[1]*B[2]-A[2]*B[1];
    e=B[0]*A[2]-A[0]*B[2];
    f=A[0]*B[1]-B[0]*A[1];
    //A=a,b,c
    //B=x,y,z
  // d=(b*z)-(c*y);
    //e=(x*c)-(a*z);
    //f=(a*y)-(x*b);
    
    printf("The Resultant vector is (%di)+(%dj)+(%dk)",d,e,f);


return 0;
}