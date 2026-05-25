// main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Medicine
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void addMedicine();
void viewMedicines();
void searchMedicine();

int main()
{
    int choice;

    while (1)
    {
        printf("\n=================================\n");
        printf("   MEDICAL STORE MANAGEMENT\n");
        printf("=================================\n");

        printf("1. Add Medicine\n");
        printf("2. View Medicines\n");
        printf("3. Search Medicine\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addMedicine();
                break;

            case 2:
                viewMedicines();
                break;

            case 3:
                searchMedicine();
                break;

            case 4:
                printf("\nThank You...\n");
                exit(0);

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}

// Function to Add Medicine
void addMedicine()
{
    FILE *fp;

    struct Medicine med;

    fp = fopen("data.csv", "a");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return;
    }

    printf("\nEnter Medicine ID: ");
    scanf("%d", &med.id);

    printf("Enter Medicine Name: ");
    scanf("%s", med.name);

    printf("Enter Quantity: ");
    scanf("%d", &med.quantity);

    printf("Enter Price: ");
    scanf("%f", &med.price);

    fprintf(fp, "%d,%s,%d,%.2f\n",
            med.id,
            med.name,
            med.quantity,
            med.price);

    fclose(fp);

    printf("\nMedicine Added Successfully!\n");
}

// Function to View Medicines
void viewMedicines()
{
    FILE *fp;

    struct Medicine med;

    fp = fopen("data.csv", "r");

    if (fp == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n============================================\n");
    printf("ID\tNAME\t\tQUANTITY\tPRICE\n");
    printf("============================================\n");

    while (fscanf(fp, "%d,%49[^,],%d,%f\n",
                  &med.id,
                  med.name,
                  &med.quantity,
                  &med.price) != EOF)
    {
        printf("%d\t%s\t\t%d\t\t%.2f\n",
               med.id,
               med.name,
               med.quantity,
               med.price);
    }

    fclose(fp);
}

// Function to Search Medicine
void searchMedicine()
{
    FILE *fp;

    struct Medicine med;

    char searchName[50];
    int found = 0;

    fp = fopen("data.csv", "r");

    if (fp == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nEnter Medicine Name to Search: ");
    scanf("%s", searchName);

    while (fscanf(fp, "%d,%49[^,],%d,%f\n",
                  &med.id,
                  med.name,
                  &med.quantity,
                  &med.price) != EOF)
    {
        if (strcmp(searchName, med.name) == 0)
        {
            printf("\nMedicine Found!\n");

            printf("ID       : %d\n", med.id);
            printf("Name     : %s\n", med.name);
            printf("Quantity : %d\n", med.quantity);
            printf("Price    : %.2f\n", med.price);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nMedicine Not Found!\n");
    }

    fclose(fp);
}
