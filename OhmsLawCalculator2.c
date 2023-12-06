#include <stdio.h>
#include <math.h>

void print_menu(void);//function to print the menu
double calc_V_from_PnI(double P, double I);//function to perform V=P/I
double calc_V_from_PnR(double P, double R);//function to perform V=sqrt(P*R)
double calc_V_from_InR(double I, double R);//function to perform V=P/I

int main(){
    print_menu();

    return 0;
}

void print_menu(void){
    printf("Welcome to the Ohm's Law Calculator v2.0!\n\n");
    printf("\tHere are your calculation options:\n\n");
    printf("\t1. Find Voltage based on Power and Current (V=P/I).\n");
    printf("\t2. Find Voltage based on Power and Resistance (V=sqrt(P*R)).\n");
    printf("\t3. Find Voltage based on Current and Resistance (V=I*R).\n");
    printf("\t4. Quit.\n\n");
    printf("Enter your choice: ");
}

