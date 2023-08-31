/**
    ┌--------------------------------┐
    | Team : 1                       |
    | Date : 8/31/2023               |
    | Project : Sort Names In Array  |
    └--------------------------------┘
**/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "functions.h"

int main()
{
    char names[7][30], choice_do;
    int choice;

    do
    {
        logo(); //Include for the logo
        printf("============================================================\n");
        printf("==== Pick Sorting Order (1: Ascending - 2: Descending): ====\n");
        printf("============================================================\n");
        printf(">> ");
        scanf("%d", &choice); // Scaning the choice for the switch case
        fflush(stdin);

        switch (choice)
        {
        case 1:
            input(names); // The Input Function to scan the seven arrays
            Sort_Ascending(names); // This function to sort the seven names from A ot Z
            break;

        case 2:
            input(names); // The Input Function to scan the seven arrays
            Sort_Descending(names); // This function to sort the seven names from Z ot A
            break;

        default: // In case the user didn't enter 1 or 2 
            printf("Invlaid Choice!!\n");
            
            break;
        }
            printf("============================================================\n");
            printf("============== Do You Want Try Again ( -> Y - -> N): =======\n");
            printf("============================================================\n");
            printf(":\n>> ");
            scanf("%c", &choice_do);
            fflush(stdin);
        
    } while (choice_do == 'y' || choice_do == 'Y');

    return 0;
}
