// WAP to show monday to sunday using switch case
#include <stdio.h>
void main()
{
    int no;
    printf("Enter the no from 1 to 7:    ");
    scanf("%d", &no);
    switch (no)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;

    default:
        printf("PLZ SELECT NO FORM 1 TO 7");
        break;
    }
}
