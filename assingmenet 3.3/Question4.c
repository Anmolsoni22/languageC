#include <stdio.h>

int main() {
    int customer_id;
    char name[50];
    float units, charge_per_unit, total_bill;

    // Input section
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    // Determine charge per unit based on units consumed
    if (units <= 199) {
        charge_per_unit = 1.20;
    }
    else if (units >= 200 && units < 400) {
        charge_per_unit = 1.50;
    }
    else if (units >= 400 && units < 600) {
        charge_per_unit = 1.80;
    }
    else {
        charge_per_unit = 2.00; // You can add this for units above 600
    }

    // Calculate total bill
    total_bill = units * charge_per_unit;

    // Display the bill
    printf("\nElectricity Bill\n");

    printf("Customer ID       : %d\n", customer_id);
    printf("Customer Name     : %s\n", name);
    printf("Units Consumed    : %.2f\n", units);
    printf("Charge per Unit   : ₹%.2f\n", charge_per_unit);
    printf("Total Amount      : ₹%.2f\n", total_bill);

    return 0;
}
