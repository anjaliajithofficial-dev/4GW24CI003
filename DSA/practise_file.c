#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
int top = -1;
int stack[MAX];
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack is full!Cannot add elements.");
        return;
    }
    stack[++top] = value;
    printf("%d has been added to the stack.", value);
}
int pop()
{
    if (top == -1)
    {
        printf("Stack is empty! Cannot delete elements.");
        return -1;
    }
    return stack[top--];
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty! Cannot delete elements.");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}
void checkPalindrome()
{
    char str[100], rev[100];
    int tempTop = -1;
    int tempStack[100];
    printf("Enter the String:");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        tempStack[++tempTop] = str[i];
    }
    for (int i = 0; i < len; i++)
    {
        rev[i] = tempStack[tempTop--];
    }
    if (strcmp(str, rev) == 0)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
}
void isOverflow()
{
    if (top == MAX - 1)
        printf("Stack Overflow!Cannot add elements\n.");
    else
        printf("Can add elements.\n");
}
void isUnderflow()
{
    if (top == -1)
        printf("Stack Underflow!Cannot show elements.\n");
    else
        printf("No underflow.\n");
}
int main()
{
    int choice, value;
    while (1)
    {
        printf("\n---Stack Menu Program---\n");
        printf("1. Push an element\n");
        printf("2. Pop an element\n");
        printf("3. Check palindrome\n");
        printf("4. Demonstrate Overflow and Underflow conditions\n");
        printf("5. Display the stack\n");
        printf("6. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a value:");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            value = pop();
            if (value == -1)
                printf("Cannot delete any elements");
            printf("%d has been deleted", value);
            break;
        case 3:
            checkPalindrome();
            break;
        case 4:
            isOverflow();
            isUnderflow();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice!Please enter again.");
        }
    }
    return 0;
}