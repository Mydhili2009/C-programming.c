#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b) {
        printf("%d is bigger\n", a);
    } else if(b > a) {
        printf("%d is bigger\n", b);
    } else {
        printf("Both are equal\n");
    }

    return 0;
}