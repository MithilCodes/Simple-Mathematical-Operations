#include <stdio.h>
int nth_ap(int a, int d, int n) {
   // using formula to find the
   // Nth term t(n) = a(1) + (n-1)*d
   return (a + (n - 1) * d);
}
//main function
int main() {
   // starting number
   int a;
   printf("\nEnter first term 'a'");
   scanf("%d",&a);
   // Common difference
   int d;
   printf("\nEnter common difference 'd'");
   scanf("%d",&d);
   // N th term to be find
   int n;
   printf("\nEnter Nth term to find");
   scanf("%d",&n);
   printf("\nThe %dth term of AP :%d\n", n, nth_ap(a,d,n));
   int t;
   t=nth_ap(a,d,n);
   
   int sum;
   sum=n*(a+t)/2;
   printf("\nThe sum of first %d terms of Arithmetic Progression is %d",n,sum);
   
      return 0;
}