#include <stdio.h>
#include <string.h>

int main()
{
    printf("%s\n","==== Task 1 ====\n");
    char string[100];
    printf("Enter string: \n");
    scanf("%s", string);

    int numbersCnt = 0;
    int lettersCnt = 0;
    for (int i = 0; i < strlen(string); ++i)
    {
        if ('0' <= string[i] && string[i] <= '9')
        {
            numbersCnt++;
        }
        else if (('a' <= string[i] && string[i] <= 'z') || ('A' <= string[i] && string[i] <= 'Z'))
        {
            lettersCnt++;
        }
    }
    printf("Numbers count: %d\n", numbersCnt);
    printf("Letters count: %d\n\n", lettersCnt);

    
    printf("%s\n","==== Task 2 ====\n");

    int tariff_price, minutes, cost_per_minute; //можно через не целочисленные, но лень
    printf("Add tariff price: ");
    scanf("%d", &tariff_price);
    printf("Add number of minutes: ");
    scanf("%d", &minutes);
    printf("Add cost per 1 minute: ");
    scanf("%d", &cost_per_minute);
    int full_price = tariff_price;
    if(minutes > 499)
        full_price += (minutes - 499) * cost_per_minute;
    printf("Full price id: %d\n", full_price);
    
    return 0;

} 
