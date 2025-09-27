#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float J;
    float T;
    double V;
    
    scanf("%f", &J);
    scanf("%f", &T);
    V = J/T;
    printf ("%.3f", V );
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
