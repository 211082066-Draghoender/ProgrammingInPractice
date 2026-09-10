#include <stdio.h>
int main()
{

    int departments = 0;
    double payroll = 0.00;
    double procurement = 0.00;
    double assets = 0.00;
    double revenue = 0.00;
    double expenses = 0.00;
    double balance = revenue - expenses;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("----------------------------\n");

    printf("Enter Departments %d\n", departments);
    scanf("%d", &departments);

    printf("Enter Procurement %.2f\n", procurement);
    scanf("%lf", &procurement);

    printf("Enter payroll %.2f\n", payroll);
    scanf("%lf", &payroll);

    printf("Enter assets %.2f\n", assets);
    scanf("%lf", &assets);

    printf("Enter Total Revenue %.2f\n", revenue);
    scanf("%lf", &revenue);

    printf("Enter Total Expenses %.2f\n", expenses);
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