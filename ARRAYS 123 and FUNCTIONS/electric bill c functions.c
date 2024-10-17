#include <stdio.h>

// Function declarations
void getCustomerDetails(int *customerID, char *customerName, float *unitsConsumed);
float calculateCharges(float units);
float calculateTotalBill(float charges);

int main() {
    int customerID;
    char customerName[50];
    float unitsConsumed, charges, totalBill;

    // Get customer details
    getCustomerDetails(&customerID, customerName, &unitsConsumed);

    // Calculate charges based on units consumed
    charges = calculateCharges(unitsConsumed);

    // Calculate the total bill
    totalBill = calculateTotalBill(charges);

    // Display the output
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", charges / unitsConsumed);
    printf("Total Amount to Pay: %.2f\n", totalBill);

    return 0;
}

// Function to get customer details
void getCustomerDetails(int *customerID, char *customerName, float *unitsConsumed) {
    printf("Enter Customer ID: ");
    scanf("%d", customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName); // Read string with spaces
    printf("Enter Units Consumed: ");
    scanf("%f", unitsConsumed);
}

// Function to calculate charges based on units consumed
float calculateCharges(float units) {
    float chargePerUnit;

    if (units <= 199) {
        chargePerUnit = 1.20;
    } else if (units >= 200 && units < 400) {
        chargePerUnit = 1.50;
    } else if (units >= 400 && units < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    return chargePerUnit * units; // Total charges
}

// Function to calculate total bill including surcharges
float calculateTotalBill(float charges) {
    float totalBill = charges;

    // Apply surcharge if total exceeds Ksh. 400
    if (totalBill > 400) {
        totalBill += totalBill * 0.15; // 15% surcharge
    }

    // Ensure minimum bill is Ksh. 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    return totalBill;
}