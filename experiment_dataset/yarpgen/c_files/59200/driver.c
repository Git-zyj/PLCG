#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_6 = 2010975599U;
short var_11 = (short)12596;
int zero = 0;
long long int var_19 = 7966636652711759548LL;
unsigned int var_20 = 3501627214U;
unsigned int var_21 = 1470106872U;
unsigned short var_22 = (unsigned short)61145;
signed char var_23 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
