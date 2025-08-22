#include <stdio.h>
#include <string.h>

union info
{
    float salary;
    int roll;
    char name[20];
};

int main()
{

    // Another way of initializing structure
    union info person1;
    strcpy(person1.name, "badhon pain");
    person1.roll = 87;
    person1.salary = 32.5;
    printf("%s %d %.1f\n", person1.name, person1.roll, person1.salary);

    return 0;
}