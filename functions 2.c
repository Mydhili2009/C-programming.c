#include <stdio.h>
void Digits(int num);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Individual digits are:\n");
    Digits(number);   

    return 0;
}
void Digits(int num) {
    int rev = 0, digit;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
        }
    
    while (rev > 0) {
        digit = rev % 10;
        printf("%d\n", digit);
        rev /= 10;
    }
}