
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    do
    {
        printf("\n--- STRING OPERATIONS ---\n");
        printf("1. Length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Reverse string\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %zu", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied string = %s", str2);
                break;

            case 3:
                printf("Enter second string: ");
                getchar();
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcat(str1, str2);
                printf("Concatenated string = %s", str1);
                break;

            case 4:
                printf("Enter second string: ");
                getchar();
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal");
                else
                    printf("Strings are not equal");
                break;

            case 5:
                strrev(str1);
                printf("Reversed string = %s", str1);
                break;

            case 6:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 6);

    return 0;
}

