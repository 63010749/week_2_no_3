#include <stdio.h>

void device(num,num1) {
    int k = 1, max = 1;
    while (num != 1 && num1 != 1 && k <= num || k <= num1) {
        while (num % k == 0 && num1 % k == 0 && k > max) {
            max = k;
        }
        k++;
    }
    printf("%d", max);
}
int main() {
    int num, num1;
    printf("Enter first number : ");
    scanf("%d", &num);
    printf("Enter senond number : ");
    scanf("%d", &num1);
    printf("Greatest divisor : ");
    device(num, num1);
    return 0;
}