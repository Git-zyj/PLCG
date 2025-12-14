#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 351877246;
int var_3 = -1550404382;
long long int var_4 = 4940272929875409232LL;
int var_5 = -1794311983;
int var_6 = 11099973;
int var_7 = 2035876230;
int var_8 = -2132594397;
long long int var_10 = 977819023632520970LL;
long long int var_11 = 6746811759814480511LL;
long long int var_12 = -5477385359567216150LL;
long long int var_14 = 380886132556157149LL;
int zero = 0;
long long int var_18 = 3577791598731180386LL;
int var_19 = -1664602527;
int var_20 = 544279307;
long long int var_21 = -7471330708795379815LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
