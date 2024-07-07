// Example 05-09

#include <stdio.h>
#include <math.h>

const float BASE_CHARGE = 2;
const float CHARGE_PER_HOUR = 0.5;
const float CHARGE_CUT_OFF = 10;
const int BASE_HOUR_CUTOFF = 3;

float calcCharges(float numHours) {
    float charge = BASE_CHARGE + (
        numHours > BASE_HOUR_CUTOFF
        ? ceil((numHours - BASE_HOUR_CUTOFF)) * CHARGE_PER_HOUR
        : 0
    );
    return (charge > CHARGE_CUT_OFF) ? CHARGE_CUT_OFF : charge;
}

int main(void) {
    float car1Hours, car2Hours, car3Hours, car1Price, car2Price, car3Price;

    printf("How many hours has car 1 been parked? ");
    scanf("%f", &car1Hours);
    car1Price = calcCharges(car1Hours);
    printf("How many hours has car 2 been parked? ");
    scanf("%f", &car2Hours);
    car2Price = calcCharges(car2Hours);
    printf("How many hours has car 3 been parked? ");
    scanf("%f", &car3Hours);
    printf("\n\n");
    car3Price = calcCharges(car3Hours);

    printf("Car\tHours\tCharge\n");
    printf("1\t%.1f\t$%.2f\n", car1Hours, car1Price);
    printf("2\t%.1f\t$%.2f\n", car2Hours, car2Price);
    printf("3\t%.1f\t$%.2f\n", car3Hours, car3Price);
    printf("TOTAL\t%.1f\t$%.2f\n",
        car1Hours + car2Hours + car3Hours,
        car1Price + car2Price + car3Price
    );
}