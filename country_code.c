#include <stdio.h>
#include "main.h"
// #define SIZE 100

int input(int);

struct dial_code
{
        char *country;
        int code;
};

int main(void)
{
        int num_count = 0;
        int size = 100;
        int i = 0;
        printf("Press i to save a country code, p to print out all codes, q to quit, c to show your contact information, s to search for a country code.\n");

        return (0);
}

void input(int code)
{
        
        if (num_count < size)
        {
                record[i].country = gets();
                scanf("%d", &record[i].code);
        }
                num_count++;
                i++;
        
        else
                printf("Cannot save country code, storage is full.\nEither remove a country(press 'd') or press 'q' to quit.\n");
                char buf = getchar();
                if (buf == 'd')
                {
                        delete();
                }
                else if (buf == 'q')
                {
                        quit(0);
                }

        
}

void search_name(char *input)
{
        for (int i = 0; i < 100; i++)
        {
                if (record[i].country == input)
                {       
                        printf("%s\n", record[i].country);
                        printf("%s\n", record[i].code);
                }       
        }
        else
                printf("%s not in the list", input);
                if (num_count < size)
                {
                        printf("May I know if you wish to save the entry? (Y/n)\n");
                        char c = getchar();
                        if (c == 'Y' || c == 'y')
                        {
                                record[i].country = input;
                                scanf("%d", &record[i].code);
                        }
                }

}

void search_code(int input)
{
        for (int i = 0; i < 100; i++)
        {
                if (record[i].country == input)
                {       
                        printf("%s\n", record[i].country);
                        printf("%s\n", record[i].code);
                }       
        }
        else
                printf("%d not in the list", input);
                if (num_count < size)
                {
                        printf("May I know if you wish to save the entry? (Y/n)\n");
                        char c = getchar();
                        if (c == 'Y' || c == 'y')
                        {
                                record[i].country = input;
                                scanf("%d", &record[i].code);
                        }
                }

}

/* void delete(int input)
{
        for (int i = 0; i < num_count; i++)
        {
                if (record[i].country == input)
                {

                }
} */