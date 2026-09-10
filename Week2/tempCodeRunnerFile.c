#include <stdio.h>
int main()
{

    int departments;
    double payroll;
    double procurement;
    double assets;
    double revenue;
    double expenses;
    double balance = revenue - expenses;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("----------------------------\n");

    printf("Enter Departments\n");
    scanf("%d", &departments);

    printf("Enter Procurement\n");
    scanf("%lf", &procurement);

    printf("Enter payroll\n");
    scanf("%lf", &payroll);

    printf("Enter assets\n");
    scanf("%lf", &assets);

    printf("Enter Total Revenue\n");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses\n");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("SUMMARY OF MUNICIPAL BUDGET CALCULATOR\n");
    printf("----------------------------\n");

    printf("Departments: %d\n", departments);
    printf("Procurement: %.2f\n", procurement);
    printf("Payroll: %.2f\n", payroll);
    printf("Assets: %.2f\n", assets);
    printf("Total Revenue: %.2f\n", revenue);
    printf("Total Expenses: %.2f\n", expenses);
    printf("Total Balance: %.2f\n", balance);

    printf("----------------------------\n");

    return 0;
}