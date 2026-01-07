#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char *name;
    int date;
    char *activity;
} Day;
Day *create(int size);
void read(Day *calendar, int size);
void display(Day *calendar, int size);
void freecalendar(Day *calendar, int size);
void main()
{
    int size = 7;
    Day *calendar = create(size);
    read(calendar, size);
    display(calendar, size);
    freecalendar(calendar, size);
    return;
}
Day *create(int size)
{
    Day *calendar = (Day *)malloc(size * sizeof(Day));
    if (!calendar)
    {
        printf("Memory Allocation failed");
        exit(1);
    }
    return calendar;
}
void read(Day *calendar, int size)
{
    char buffer[100];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Day Name:");
        scanf("%s", buffer);
        calendar[i].name = (char *)malloc(strlen(buffer) + 1);
        strcpy(calendar[i].name, buffer);
        printf("Date:");
        scanf("%d", &calendar[i].date);
        printf("Enter the Activity Name:");
        scanf("%s", buffer);
        calendar[i].activity = (char *)malloc(strlen(buffer) + 1);
        strcpy(calendar[i].activity, buffer);
    }
}
void display(Day *calendar, int size)
{
    printf("\n--------------\n");
    printf("\n-------Acitvity Details-------\n");
    for (int i = 0; i < size; i++)
    {
        printf("Day %s:\n ", calendar[i].name);
        printf("Date %d\n", calendar[i].date);
        printf("Activity: %s\n", calendar[i].activity);
    }
    printf("\n--------------\n");
}
void freecalendar(Day *calendar, int size)
{
    for (int i = 0; i < size; i++)
    {
        free(calendar[i].name);
        free(calendar[i].activity);
    }
    free(calendar);
}