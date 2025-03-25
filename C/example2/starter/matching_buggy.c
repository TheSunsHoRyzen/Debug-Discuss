#include <stdio.h>
#include <string.h>

#define MAX_LINE 256

int main()
{
    char pattern[50];
    char line[MAX_LINE];
    FILE *file = fopen("../input.txt", "w");

    if (!file)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    printf("Enter pattern to search: ");
    gets(pattern);

    while (fgets(line, MAX_LINE, file))
    {
        if (strstr(pattern, line))
        {
            printf("%s\n", line);
        }
    }

    fclose(file);
    return 0;
}
