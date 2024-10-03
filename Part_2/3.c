#include <stdio.h>
int main() {
    int age, result;
    printf("Enter your age: ");
    if(scanf("%d", &age) != 1) {
        printf("n/a");
        return 0;
    }
    result = age * 365;
    printf("Your age: %d years, and your age in days: %d", age, result);

}