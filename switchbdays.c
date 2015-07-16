#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("What month were you born? 1-12:  ");
    int k = GetInt();
    
    switch(k)
    {
        case 11:
        case 12:
        case 1:
        case 2:
            printf("You were born in the winter months!\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("You were born in the spring months!\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("You were born in the summer months!\n");
            break;
        case 9:
        case 10:
            printf("You were born in the fall months!\n");
            break;
        default:
            printf("Please try again\n");
            break;
               
    }
}
