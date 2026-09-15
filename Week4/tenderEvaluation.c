#include <stdio.h>
int main(void)
{
    char SupplierName[200];
    double SupplierPrice, Budget;
    int RegistrationStatus, Documents;

    printf("TENDER EVALUATION \n");

    printf("Enter the supplier name: ");
    fgets(SupplierName, sizeof(SupplierName), stdin);

    printf("Enter the available budget: ");
    scanf("%lf", &Budget);
    printf("For the next 2 questions, insert 1 for yes and 0 for no: \n");

    printf("Does the supplier have a valid registration? ");
    scanf("%d", &RegistrationStatus);

    if (RegistrationStatus == 1)
    {

        printf("Has the supplier submitted the required documents? ");
        scanf("%d", &Documents);

        if (Documents == 1)
        {

            printf("Enter the supplier's price on quotation:$ ");
            scanf("%lf", &SupplierPrice);

            if (SupplierPrice <= Budget)
            {
                printf("\n");
                printf("----------------------------- \n");
                printf("Supplier name: %s \n", SupplierName);
                printf("Supplier price: $%.2lf \n", SupplierPrice);
                printf("Supplier %.2lf below budget \n", Budget - SupplierPrice);
                printf("Preferred supplier \n");
                printf("----------------------------- \n");
            }
        }
        else
        {
            printf("The supplier has been disqualified \n");
        }
    }

    else
    {
        printf("The supplier %s disqualified. \n");
    }
}