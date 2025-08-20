#include <stdio.h>
int main()
{

    int first;
    printf("First angle :");
    scanf("%d", &first);

    int last;
    printf("last angle :");
    scanf("%d", &last);

    int result = 180 - (first + last);
    printf("Third angle is = %d", result);

    return 0;
}