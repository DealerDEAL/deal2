#include<math.h>
#include<stdio.h>

int main()
{
    int x, y, p;
    printf("������ x ");
    scanf("%d", &x);
    printf("������ y ");
    scanf("%d", &y);
   p=((x+y)/2)*sqrt((x+y)/x*y);
   printf("�����=%d",p);
   
    return 0;
}
