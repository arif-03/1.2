#include <stdio.h>
int main()
{
    FILE *fptr; // file pointer
    char name[20]; // name variable
    int roll; // roll variable
    fptr = fopen("test.txt", "r");
    if(fptr == NULL)
    {
        printf("Error!");
        return 1;
    }
    fscanf(fptr, "Name: %s\nRoll: %d\n", name, &roll);
    printf("Name: %s\nRoll: %d\n", name, roll);
    fclose(fptr); // closing file
    return 0;
}
