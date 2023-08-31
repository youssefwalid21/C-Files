/** 
    ┌--------------------------------┐
    | Team : 1                       |
    | Date : 8/31/2023               |
    | Project : Sort Names In Array  |
    └--------------------------------┘
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

char temp[1][30];
int cmp;

// Prototype
void logo();

// Body
void logo()
{
    printf("   _____            _     _   _                             _____                                       \n");
    printf("  / ____|          | |   | \\ | |                           |_   _|           /\\                         \n");
    printf(" | (___   ___  _ __| |_  |  \\| | __ _ _ __ ___   ___  ___    | |  _ __      /  \\   _ __ _ __ __ _ _   _ \n");
    printf("  \\___ \\ / _ \\| '__| __| | . ` |/ _` | '_ ` _ \\ / _ \\/ __|   | | | '_ \\    / /\\ \\ | '__| '__/ _` | | | |\n");
    printf("  ____) | (_) | |  | |_  | |\\  | (_| | | | | | |  __/\\__ \\  _| |_| | | |  / ____ \\| |  | | | (_| | |_| |\n");
    printf(" |_____/ \\___/|_|   \\__| |_| \\_|\\__,_|_| |_| |_|\\___||___/ |_____|_| |_| /_/    \\_\\_|  |_|  \\__,_|\\__, |\n");
    printf("                                                                                                   __/ |\n");
    printf("                                                                                                  |___/\n");
    printf("@Made By Team 1 (Fares Mostafa - Hassan Mohamed - Youssef Tamer - Youssef Walid)\n");
}


// Prototype
void input(char names[7][30]);

// Body
void input(char names[7][30])
{
    printf("Enter Seven Names: ");
    printf("\n>> ");

    for (int i = 0; i < 7; i++)
    {
        gets(names[i]);
        fflush(stdin);
        strlwr(names[i]);


        if (i == 6)
        {
            break;
        }
        printf(">> ");
    }
}

// Prototype
void Sort_Ascending(char names[7][30]);

// Body
void Sort_Ascending(char names[7][30])
{
    for (int j = 0; j <= 6; j++)
    {

        for (int i = 0; i <= 5; i++)
        {
            cmp = strcmp(names[i], names[i + 1]);

            if (cmp == 1)
            {
                strcpy(temp[0], names[i]);
                strcpy(names[i], names[i + 1]);
                strcpy(names[i + 1], temp[0]);
            }
        }
    }
    printf("\n\nAfter Sorting:\n\n");
    for (int i = 0; i <= 7; i++)
    {
        if (i == 7)
        {
            break;
        }
        printf(">> ");
        puts(names[i]);
    }
}

// Prototype
void Sort_Descending(char names[7][30]);

// Body
void Sort_Descending(char names[7][30])
{
    for (int j = 0; j <= 6; j++)
    {

        for (int i = 0; i <= 5; i++)
        {
            cmp = strcmp(names[i], names[i + 1]);
            if (cmp == -1)
            {
                strcpy(temp[0], names[i]);
                strcpy(names[i], names[i + 1]);
                strcpy(names[i + 1], temp[0]);
            }
        }
    }
    printf("\n\nAfter Sorting:\n\n");
    for (int i = 0; i <= 7; i++)
    {
        if (i == 7)
        {
            break;
        }
        printf(">> ");
        puts(names[i]);
    }
}
