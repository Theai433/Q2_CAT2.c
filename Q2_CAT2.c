#include <stdio.h>

int main() {
    float salary, tax = 0;

    printf("Enter the yearly salary of the employee: ");
    scanf("%f", &salary);

    if (salary <= 400000) {
        tax = salary * 0.01; // 1% tax
    } else if (salary > 400000 && salary <= 1000000) {
        tax = 400000 * 0.01 + (salary - 400000) * 0.15; // 1% tax for first 400000, 15% tax for remaining amount
    } else {
        tax = 400000 * 0.01 + 600000 * 0.15 + (salary - 1000000) * 0.25; // 1% tax for first 400000, 15% tax for next 600000, 25% tax for remaining amount
    }

    printf("Tax to be paid: %.2f\n", tax);
    
    return 0;
}
