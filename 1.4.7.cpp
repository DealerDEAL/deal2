#include<math.h>
#include<stdio.h>

int main()	
{
	int month;
	double sumvklad,procent;
    printf("���������� ������� ");
    scanf("%d", &month);
    printf("������ �������  ");
    scanf("%lf", &procent);
    printf("������� �������������� �����");
    scanf("%lf", &sumvklad);
    printf("��� �������������� ������=%.2lf", sumvklad);
    for(int i=0;i<month;i++){
        sumvklad=sumvklad+(sumvklad*(procent/100.0));
    }
    printf(" � ��������=%.1lf", procent);
    printf(" ����� ������=%.2lf", sumvklad);

   
    return 0;
}

