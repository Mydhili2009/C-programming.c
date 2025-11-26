#include <stdio.h>
int reverse(int n);
int main() {
    int n,a, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    rev = reverse(n);  
    printf("Reverse of %d is: %d\n", n, rev);
    return 0;
}
int reverse(int n) {
    int rev = 0, a;
    while (n > 0) {
        a = n % 10;        
        rev = rev * 10 + a;  
        n/= 10;               
    }
    return rev;
}