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
#include "sorting_array.h"

int main()
{
    char names[7][30], choice_do;
    int choice;

    do
    {
        logo(); //include for the logo
        printf("============================================================\n");
        printf("==== Pick Sorting Order (1: Ascending - 2: Descending): ====\n");
        printf("============================================================\n");
        printf(">> ");
        scanf("%d", &choice); //scaning
        fflush(stdin);

        switch (choice)
        {
        case 1:
            input(names);
            Sort_Ascending(names);
            break;

        case 2:
            input(names);
            Sort_Descending(names);
            break;

        default:
            printf("Error!!\n");
            logo();
            printf("============================================================\n");
            printf("============== Do You Want Try Again ( -> Y - -> N): =======\n");
            printf("============================================================\n");
            printf(":\n>> ");
            scanf("%c", &choice_do);
            fflush(stdin);
            break;
        }
    } while (choice_do == 'y' || choice_do == 'Y');

    return 0;
}
