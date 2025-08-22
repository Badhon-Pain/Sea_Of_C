#include <stdio.h>

enum Weekday
{
    Saturday,  // 0
    Sunday,    // 1
    Monday,    // 2
    Tuesday,   // 3
    Wednesday, // 4
    Thursday,  // 5
    Friday     // 6
};

int main()
{
    enum Weekday today;
    today = Friday;
    printf("Day number: %d\n", today);
    return 0;
}
