#include <stdio.h>
#include <math.h>

enum Week {
    MONDAY,
     TUESDAY,
      WEDNESDAY,
          THIRSDAY,
      FRIDAY,
     SATURDAY,
    SUNDAY
};
struct Round {
    double r;
};

struct ADSL {
        unsigned DSL : 1;
        unsigned PPP: 1;
        unsigned Link: 1;
    };

union Value {
    int bytes;
    struct ADSL project;
};

double calcLength(struct Round *c) {
    return 2 * M_PI * c->r;
}

double calcArea(struct Round *c) {
    return M_PI * c->r * c->r;
}














int main () {
    printf("%s\n","===Task 1===");
    enum Week m;
    m = MONDAY;
    printf("Day: %d\n\n", m);

    printf("%s\n","===Task 2===");
    struct Round fig;
        fig.r = 1;
        printf("Length: %lf\tArea: %lf\n\n", calcLength(&fig), calcArea(&fig));

    printf("%s\n","===Task 3===");
    union Value v;
    printf("Input your number = ");
        scanf("%d", &v.bytes);
        printf("%d   %d   %d\n", v.project.DSL, v.project.Link, v.project.PPP);

        return 0;
    }


