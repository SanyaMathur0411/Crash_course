#include <stdio.h>

void main()
{
    int array[5];
     int odd_sum=0;
     int even_sum=0;
     
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
  for (int j=0;j<5;j++)//adds elements in odd and even positions
  {
      if(j%2==1)
      odd_sum+=array[j];
      else 
      even_sum+=array[j];
  }
  int diff= odd_sum-even_sum;
  if (diff%11==0)
  printf("Divisible");
  else
  printf("Not divisible");

}
