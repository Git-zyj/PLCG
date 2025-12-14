#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2006235469141224841LL;
long long int var_2 = 8739334371099946809LL;
int var_6 = -119031808;
int var_7 = 532594642;
int var_8 = -254221480;
long long int var_9 = -1842515197215552515LL;
unsigned long long int var_11 = 11182843529012254567ULL;
long long int var_13 = 969765678816266449LL;
int var_14 = -2142474524;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)55;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
