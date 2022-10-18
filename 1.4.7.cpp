#include<math.h>
#include<stdio.h>

int main()	
{
	int month;
	double sumvklad,procent;
    printf("количество месецев ");
    scanf("%d", &month);
    printf("введит процент  ");
    scanf("%lf", &procent);
    printf("введите первоночальный вклад");
    scanf("%lf", &sumvklad);
    printf("При первоначальном вкладе=%.2lf", sumvklad);
    for(int i=0;i<month;i++){
        sumvklad=sumvklad+(sumvklad*(procent/100.0));
    }
    printf(" и проценте=%.1lf", procent);
    printf(" сумма вклада=%.2lf", sumvklad);

   
    return 0;
}

