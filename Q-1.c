#include <stdio.h>

int main() {

    char a[100], * p;
    printf("Enter any string: ");
    gets(a);
    p = &a;
    strlen(a);

    printf("The length of the string is: %d", strlen(a));

}