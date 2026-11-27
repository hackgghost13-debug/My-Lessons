#include <stdio.h>
#include <string.h>

int main(void)
{
    char adj1[50] = "";
    char noun[50] = "";
    char verb[50] = "";
    char adj2[50] = "";
    char adj3[50] = "";

    printf("*************Mad Labs Game******************\n");
    printf("Enter an adjective : ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strcspn(adj1, "\n")] = '\0';

    printf("Enter a noun (a person or an animal) : ");
    fgets(noun, sizeof(noun), stdin);
    noun[strcspn(noun, "\n")] = '\0';

    printf("Enter an adjective : ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strcspn(adj2, "\n")] = '\0';

    printf("Enter a verb (ending with -ing) : ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = '\0';

    printf("Enter an adjective : ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strcspn(adj3, "\n")] = '\0';

    printf("Today I went to %s zoo\n", adj1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("The %s was %s and %s!\n", noun, adj2, verb);
    printf("I was %s!\n", adj3);
    printf("*********************************THE END >:3***********************************\n");
    printf("********************************************************************************\n");

    return 0;
}
