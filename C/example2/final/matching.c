#include <stdio.h>
#include <string.h>

#define MAX_LINE 256

int main()
{
    char pattern[50];
    char line[MAX_LINE];
    FILE *file = fopen("input.txt", "r");

    if (!file)
    {
        perror("Unable to open file");
        return 1;
    }

    printf("Enter pattern to search: ");
    scanf("%s", pattern);

    while (fgets(line, MAX_LINE, file))
    {
        if (strstr(line, pattern))
        {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}
