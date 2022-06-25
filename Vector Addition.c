#include <stdio.h>
int main ()
{
  int vector_a[3], vector_b[3];	
  int result[3];		
  int i;
 
  printf ("Enter elements of vector vector_a:\n");
  for (i = 0; i < 3; i++)
    scanf ("%d", &vector_a[i]);
    
  printf ("Enter elements of vector vector_b:\n");
  for (i = 0; i < 3; i++)
    scanf ("%d", &vector_b[i]);
    
 
  for (i = 0; i < 3; i++)
    result[i] = vector_a[i] + vector_b[i];

  printf ("Addition vector:\n");

  for (i = 0; i < 3; i++)
    printf ("%d ", result[i]);
}