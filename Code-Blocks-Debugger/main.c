/*
    Author: Matt Johnson
    Subject: debugging
    Purpose: program debugs
    Date: 02/11/2023
*/

#include <stdio.h>
#include <stdlib.h>

void print_average(int, int, int, double);
double compute_average(int, int, int);

int main(void) {

    int n1, n2, n3;

    printf("Enter three integers to compute an average: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    print_average(n1, n2, n3, compute_average(n1, n2, n3));

    return 0;
}

void print_average(int n1, int n2, int n3, double average) {

    printf("\nThe mean of %d, %d, and %d is %.2f\n", n1, n2, n3, average);
}

double compute_average(int n1, int n2, int n3) {

    double sum;

    sum = n1 + n2 + n3;
    return sum / 3.0;
}
