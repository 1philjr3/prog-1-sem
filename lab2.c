
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main() {
    printf("Input the alpha: ");
    double alpha;
    scanf("%lf", &alpha);

    double z1 =  (sin(2 * alpha * M_PI / 180)+sin(5 * alpha * M_PI / 180)-sin(3 * alpha * M_PI / 180) / cos(alpha * M_PI / 180)-cos(3 * alpha * M_PI / 180)+cos(5 * alpha * M_PI / 180));
    double z2 = tan(3 * alpha * M_PI / 180);

    printf("z1: %lf\nz2: %lf\n", z1, z2);
}
