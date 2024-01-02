// Calculate your half of a cd//restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    //1.Calculate Tax Amount
    float tax_amount = bill * (tax / 100);
    //2.Calculate Bill + Tax Amount
    float bill_amount = bill + tax_amount;
    //3.Calculate Tip Amount
    float tip_amount = bill_amount * ((float)tip / 100);
    //4.Calculate Total Amount
    float total_amount = bill_amount + tip_amount;
    //5.Calculate and return half of the Total Amount
    return total_amount / 2;
}
