#include <stdio.h>
int main() 
{
    char name[789]; // Buffer to store a string
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "a");

    if (input == NULL || output == NULL)
     {
        printf("Error opening file!\n");
        return 1;
    }
    while (fscanf(input,"%s", name) == 1)
     {
        fprintf(output,"%s", name);
    }
    fclose(input);
    fclose(output);

    printf("copying text completed\n");
    return 0;
}
