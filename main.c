#include <stdio.h>
#include <stdlib.h>

#define FINAL_DAY 10
#define START_DIST 10
#define FINAL_DIST 20
#define TOTAL_DIST 100
#define PERCENT 10
#define FACTOR (100+PERCENT)/100.0

#define MYDEBUG

#ifndef MYDEBUG
#define DUMP(ival, fval)
#else
#define DUMP(ival, fval) printf(#ival"=%d\t"#fval"=%f\n", ival, fval)

#endif // DEBUG

int main()
{
    int n;
    double x = 0, s;

    for(n = 1, x = START_DIST; n < FINAL_DAY; ++n, x *= FACTOR)
        DUMP(n, x);
    wprintf(L"In %d day the athlete ran %.3f km\n\n", n, x);

    for(n = 1, x = START_DIST; x < FINAL_DIST; ++n, x *= FACTOR)
        DUMP(n, x);
    wprintf(L"In %d day the athlete ran %.3f km\n\n", n, x);

    for(n = 1, s = x = START_DIST; s < TOTAL_DIST; ++n, s += x *= FACTOR)
        DUMP(n, s);
    wprintf(L"In %d day the athlete ran %.3f km\n\n", n, s);

    return 0;
}
