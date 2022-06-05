#include<stdio.h>
int main()
{
  int m, n, i, j, count;

  // The value of m and n should be +ve and m<n
  printf("Enter m and n Values(m<n): ");
  scanf("%d %d",&m,&n);

  // 1 is not a prime number, so check from 2
  if(m == 1) m++;

  printf("Prime numbers from %d to %d are: \n", m, n);

  for(i=m;i<=n;i++)
  {
      count=0;
      for(j=2;j<=i/2;j++)
      {
     if(i%j==0)
     {
       count=1;
       break;
     }
      }

      if(count==0)
     printf("%d\t", i);
  }

  return 0;
}

