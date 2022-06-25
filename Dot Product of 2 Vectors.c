#include <stdio.h>



int dot_product(int v1[], int v2[]);

int main(void)
{
  
  int v1[3] ;
  int v2[3] ;
  printf("Enter i,j,k components for v1 vector\n");
  for(int i=0;i<3;i++){
  
  
  scanf("%d",&v1[i]);}
   printf("Enter i,j,k components for v2 vector\n");
  for(int i=0;i<3;i++){
  
 
  scanf("%d",&v2[i]);}
  int result = dot_product(v1,v2);
  printf("Result: %d\n", result);

  return 0;
}


int dot_product(int v1[], int v2[])
{
  
  int sum = 0;
  for (int i = 0; i < 3; i++){
    sum += v1[i] * v2[i];}
  return sum;
}