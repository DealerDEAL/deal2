#include<math.h>
#include<stdio.h>

int main()
{
    int x, y, p;
    printf("введит x ");
    scanf("%d", &x);
    printf("введит y ");
    scanf("%d", &y);
   p=((x+y)/2)*sqrt((x+y)/x*y);
   printf("ответ=%d",p);
   
    return 0;
}
