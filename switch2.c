#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("Please give me an integer between 1 and 10:  ");
    int r = GetInt();
    
    switch(r)
    {
        case 1:
        case 2:
        case 3:
            printf("You gave me a small integer!\n");
            break;
            
        case 4:
        case 5:
        case 6:
        case 7:
            printf("You gave me a medium integer!\n");
            break;
            
        case 8:
        case 9:
        case 10:
            printf("You gave me a large integer!\n");
            break;
           
        default:
            printf("What the heck? Try again!\n");
            break;
    }
}
