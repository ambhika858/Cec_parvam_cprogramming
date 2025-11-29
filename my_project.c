#include<stdio.h>
#include<stdio.h>

#define MAX 50 // Maximum number of students

// ================= STRUCTURE =================
struct product
{
    int id;
    char productname[30];
    float quantity;
};

// Global array of structures
struct product products[MAX];
int count = 0; // Number of product stored

// Function to clear input buffer
void clearBuffer()
{
    while (getchar() != '\n')
        ;
}

// ================= FUNCTION DECLARATIONS =================
void addproduct();
void displayproducts();
void searchproduct();
void updateproduct();
void deleteproduct();

// ================= MAIN FUNCTION =================
int main()
{
    int choice;

    while (1)
    {
        printf("\n===== PRODUCT RECORD SYSTEM =====\n");
        printf("1. Add product\n");
        printf("2. Display products\n");
        printf("3. Search product\n");
        printf("4. Update product\n");
        printf("5. Delete product\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearBuffer(); // FIX

        switch (choice)
        {
        case 1:
            addproduct();
            break;
        case 2:
            displayproducts();
            break;
        case 3:
            searchproduct();
            break;
        case 4:
            updateproduct();
            break;
        case 5:
            deleteproduct();
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}

// ================= ADD PRODUCT =================
void addproduct()
{
    if (count >= MAX)
    {
        printf("product limit reached!\n");
        return;
    }

    printf("\nEnter id Number: ");
    scanf("%d", &products[count].id);
    clearBuffer(); // FIX

    printf("Enter product Name: ");
    scanf("%[^\n]", products[count].productname);
    clearBuffer(); // FIX

    printf("Enter quantity: ");
    scanf("%f", &products[count].quantity);
    clearBuffer(); // FIX

    count++;
    printf("product added successfully!\n");
}

// ================= DISPLAY PRODUCT =================
void displayproducts()
{
    if (count == 0)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n--- product List ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("id: %d\n", products[i].id);
        printf("product name: %s\n", products[i].productname);
        printf("quantity: %.2f\n", products[i].quantity);
        printf("--------------------\n");
    }
}

// ================= SEARCH PRODUCT =================
void searchproduct()
{
    int id;
    printf("\nEnter id number to search: ");
    scanf("%d", &id);
    clearBuffer(); // FIX

    for (int i = 0; i < count; i++)
    {
        if (products[i].id == id)
        {
            printf("\nproduct Found!\n");
            printf("id: %d\n", products[i].id);
            printf("product Name: %s\n", products[i].productname);
            printf("quantity: %.2f\n", products[i].quantity);
            return;
        }
    }
    printf("product not found.\n");
}

// ================= UPDATE PRODUCT =================
void updateproduct()
{
    int id;
    printf("\nEnter id number to update: ");
    scanf("%d", &id);
    clearBuffer(); // FIX

    for (int i = 0; i < count; i++)
    {
        if (products[i].id == id)
        {
            printf("Enter new product name: ");
            scanf("%[^\n]", products[i].productname);
            clearBuffer(); // FIX

            printf("Enter new quantity: ");
            scanf("%f", &products[i].quantity);
            clearBuffer(); // FIX

            printf("Record updated successfully!\n");
            return;
        }
    }
    printf("product not found.\n");
}

// ================= DELETE PRODUCT =================
void deleteproduct()
{
    int id;
    printf("\nEnter id number to delete: ");
    scanf("%d", &id);
    clearBuffer(); // FIX

    for (int i = 0; i < count; i++)
    {
        if (products[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                products[j] = products[j + 1]; // shift records left
            }
            count--;
            printf("Record deleted successfully!\n");
            return;
        }
    }
    printf("product not found.\n");
}