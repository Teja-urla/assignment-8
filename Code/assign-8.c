#include <stdio.h>
int main()
{
    double r = 0.375;                     // radius of the coin
    double p = (1 - 2 * r) * (1 - 2 * r); // probability of the coin to be placed inside the square
    printf("the required probabiliy so that coid is placed inside the square is %.2f", p);
}
