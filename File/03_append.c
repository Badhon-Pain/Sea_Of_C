#include <stdio.h>

int main()
{
    FILE *file_ptr;
    file_ptr = fopen("Udemy_Python.txt", "a");
    // by using this mode, now you can edit your file as your choice
    // then input the value through your code
    int number = 87;
    fprintf(file_ptr, "%d ", number);
    fclose(file_ptr);
    return 0;
}
