#include <stdio.h>
int main () {

    int departments;
    double payroll;
    double procurement;
    double assets;
    double revenue;
    double expenses;
    double balance = revenue - expenses;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("----------------------------\n");

    printf("Enter Departments\n",departments);
    scanf("%d", &departments); 

    printf("Enter payroll\n",payroll);
    scanf("%lf", &payroll);

    printf("Enter assets\n",assets);
    scanf("%lf", &assets);

    printf("Enter Total Revenue\n",revenue);
    scanf("%lf", &revenue);

    printf("Enter Total Expenses\n",expenses);
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("Total departments: %d\n", departments);
    printf("Total Payroll: %.2f\n", payroll);
    printf("Total Assets: %.2f\n", assets);
    printf("Total Revenue: %.2f\n", revenue);
    printf("Total Expenses: %.2f\n", expenses);
    printf("Total Balance: %.2f\n", balance);

return 0;
}