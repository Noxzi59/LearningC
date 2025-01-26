// concatinate 2 strings
/*
#include <stdio.h>
int main()
{
    char str1[34] = "Hello";
    char str2[34] = "World";
    printf("The concatination of str1 and str2 is %s\n", strcat(str1, str2));
    return 0;
}
*/

// get a string from user and count number of vovels in it and print that
#include <stdio.h>
int main()
{
    char str[45];
    int vovels = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vovels++;
        }
    }
    printf("Number of vovels in the string is %d\n", vovels);

    return 0;
}

