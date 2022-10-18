#include<math.h>
#include<stdio.h>

int main()
{
  unsigned long long int sum;
  double ed=1, qof=2, num_k=64, un;
  un=pow(qof,num_k);
  sum=(ed*(un-1)/qof-1);
  printf("количество зёрен =%0.1", sum);
    return 0;
}

