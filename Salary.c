#include <stdio.h>
int main()
{
    int salary;
    printf("Enter the value is Salary = ");
    scanf("%d", &salary);
    int hra;
    printf("Enter the HRA =");
    scanf("%d", &hra);
    int da;
    printf("Enter the DA =");
    scanf("%d", &da);
    int ta;
    printf("Enter the TA = ");
    scanf("%d", &ta);
    int result = salary + hra + da + ta;
    printf("Gross Salary is = %d", result);

    return 0;
}