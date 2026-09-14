#include <stdio.h>
int main()
{
    float basicSalary;
    float houseAllowance;
    float transportAllowance;
    float SSC;
    float tax;
    float grossSalary;
    float netPay;

    printf("Enter Basic Salary: \n");
    scanf("%f", &basicSalary);

    printf("Enter House Allowance: \n");
    scanf("%f", &houseAllowance);

    printf("Enter Transport Allowance: \n");
    scanf("%f", &transportAllowance);

    printf("Enter Social Security: \n");
    scanf("%f", &SSC);

    printf("Enter Tax: \n");
    scanf("%f", &tax);

    grossSalary = basicSalary + houseAllowance + transportAllowance;
    netPay = grossSalary - tax - SSC;

    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Pay: %.2f\n", netPay);

    return 0;
}