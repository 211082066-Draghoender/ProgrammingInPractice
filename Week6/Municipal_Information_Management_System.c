
#include <stdio.h>
#include <string.h>

#define NUM_EMPLOYEES 50
#define NUM_DEPARTMENTS 10
#define NUM_VEHICLES 20
#define REG_LENGTH 20

void captureSalaries(float salaries[], int size);
void displaySalaries(float salaries[], int size);
float calculateTotal(float arr[], int size);
float calculateAverage(float total, int size);
float findHighest(float arr[], int size);
float findLowest(float arr[], int size);
void searchSalary(float salaries[], int size);

void captureBudgets(float budgets[], int size);
void displayBudgets(float budgets[], int size);
void sortBudgets(float budgets[], int size);

void captureRegistrations(char registrations[][REG_LENGTH], int size);
void displayRegistrations(char registrations[][REG_LENGTH], int size);
void searchRegistration(char registrations[][REG_LENGTH], int size);

void salaryMenu(float salaries[], int size);
void budgetMenu(float budgets[], int size);
void vehicleMenu(char registrations[][REG_LENGTH], int size);
void clearInputBuffer(void);

int main()
{
    float salaries[NUM_EMPLOYEES] = {0};
    float budgets[NUM_DEPARTMENTS] = {0};
    char registrations[NUM_VEHICLES][REG_LENGTH];

    int mainChoice;

    do
    {
        printf("\n===== MUNICIPAL INFORMATION MANAGEMENT SYSTEM =====\n");
        printf("1. Employee Salaries\n");
        printf("2. Department Budgets\n");
        printf("3. Vehicle Registrations\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &mainChoice);
        clearInputBuffer();

        switch (mainChoice)
        {
        case 1:
            salaryMenu(salaries, NUM_EMPLOYEES);
            break;
        case 2:
            budgetMenu(budgets, NUM_DEPARTMENTS);
            break;
        case 3:
            vehicleMenu(registrations, NUM_VEHICLES);
            break;
        case 0:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (mainChoice != 0);

    return 0;
}

void clearInputBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        /* discard */
    }
}

void captureSalaries(float salaries[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }
    clearInputBuffer();
}

void displaySalaries(float salaries[], int size)
{
    printf("\n--- Employee Salaries ---\n");
    for (int i = 0; i < size; i++)
    {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }
}

float calculateTotal(float arr[], int size)
{
    float total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

float calculateAverage(float total, int size)
{
    if (size == 0)
        return 0;
    return total / size;
}

float findHighest(float arr[], int size)
{
    float highest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}

float findLowest(float arr[], int size)
{
    float lowest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    return lowest;
}

void searchSalary(float salaries[], int size)
{
    float target;
    int found = 0;

    printf("Enter the salary you want to search for: ");
    scanf("%f", &target);
    clearInputBuffer();

    for (int i = 0; i < size; i++)
    {
        if (salaries[i] == target)
        {
            printf("Salary %.2f found at employee position %d.\n", target, i + 1);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Salary %.2f was not found in the records.\n", target);
    }
}

void salaryMenu(float salaries[], int size)
{
    int choice;
    do
    {
        printf("\n--- Employee Salary Menu ---\n");
        printf("1. Capture salaries\n");
        printf("2. Display all salaries\n");
        printf("3. Calculate average salary\n");
        printf("4. Find highest salary\n");
        printf("5. Find lowest salary\n");
        printf("6. Search for a salary\n");
        printf("0. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice)
        {
        case 1:
            captureSalaries(salaries, size);
            break;
        case 2:
            displaySalaries(salaries, size);
            break;
        case 3:
        {
            float total = calculateTotal(salaries, size);
            float average = calculateAverage(total, size);
            printf("Total salary: %.2f\n", total);
            printf("Average salary: %.2f\n", average);
            break;
        }
        case 4:
            printf("Highest salary: %.2f\n", findHighest(salaries, size));
            break;
        case 5:
            printf("Lowest salary: %.2f\n", findLowest(salaries, size));
            break;
        case 6:
            searchSalary(salaries, size);
            break;
        case 0:
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}

void captureBudgets(float budgets[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }
    clearInputBuffer();
}

void displayBudgets(float budgets[], int size)
{
    printf("\n--- Department Budgets ---\n");
    for (int i = 0; i < size; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }
}

/* Simple bubble sort, ascending order (lowest to highest) */
void sortBudgets(float budgets[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                float temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }
    printf("Budgets sorted from lowest to highest.\n");
}

void budgetMenu(float budgets[], int size)
{
    int choice;
    do
    {
        printf("\n--- Department Budget Menu ---\n");
        printf("1. Capture budgets\n");
        printf("2. Display all budgets\n");
        printf("3. Calculate total budget\n");
        printf("4. Calculate average budget\n");
        printf("5. Sort budgets (lowest to highest)\n");
        printf("0. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice)
        {
        case 1:
            captureBudgets(budgets, size);
            break;
        case 2:
            displayBudgets(budgets, size);
            break;
        case 3:
            printf("Total budget: %.2f\n", calculateTotal(budgets, size));
            break;
        case 4:
        {
            float total = calculateTotal(budgets, size);
            printf("Average budget: %.2f\n", calculateAverage(total, size));
            break;
        }
        case 5:
            sortBudgets(budgets, size);
            break;
        case 0:
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}

void captureRegistrations(char registrations[][REG_LENGTH], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter registration number for vehicle %d: ", i + 1);
        fgets(registrations[i], REG_LENGTH, stdin);

        /* Remove trailing newline captured by fgets, if present */
        size_t len = strlen(registrations[i]);
        if (len > 0 && registrations[i][len - 1] == '\n')
        {
            registrations[i][len - 1] = '\0';
        }
    }
}

void displayRegistrations(char registrations[][REG_LENGTH], int size)
{
    printf("\n--- Vehicle Registration Numbers ---\n");
    for (int i = 0; i < size; i++)
    {
        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }
}

void searchRegistration(char registrations[][REG_LENGTH], int size)
{
    char target[REG_LENGTH];
    int found = 0;

    printf("Enter the registration number to search for: ");
    fgets(target, REG_LENGTH, stdin);

    size_t len = strlen(target);
    if (len > 0 && target[len - 1] == '\n')
    {
        target[len - 1] = '\0';
    }

    for (int i = 0; i < size; i++)
    {
        if (strcmp(registrations[i], target) == 0)
        {
            printf("Registration number %s found at vehicle position %d.\n", target, i + 1);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Registration number %s was not found in the records.\n", target);
    }
}

void vehicleMenu(char registrations[][REG_LENGTH], int size)
{
    int choice;
    do
    {
        printf("\n--- Vehicle Registration Menu ---\n");
        printf("1. Capture registration numbers\n");
        printf("2. Display all registration numbers\n");
        printf("3. Search for a registration number\n");
        printf("0. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice)
        {
        case 1:
            captureRegistrations(registrations, size);
            break;
        case 2:
            displayRegistrations(registrations, size);
            break;
        case 3:
            searchRegistration(registrations, size);
            break;
        case 0:
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}