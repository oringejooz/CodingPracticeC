//Setting Decimal Precision 

#include <stdio.h>

int main()
{
    float f = 3.5;
    double d = 19.888;
    printf("%f\n",f);
    printf("%lf\n",d);

    // remove the extra zeros
    printf("%.1f\n",f);
    printf("%.2lf",d);
    return 0;
}