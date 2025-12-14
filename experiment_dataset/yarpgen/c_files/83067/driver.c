#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-119;
unsigned long long int var_6 = 8584522413565453514ULL;
int var_10 = -1279049802;
unsigned char var_11 = (unsigned char)11;
int var_14 = 1148905061;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 1800701456832821438ULL;
signed char var_20 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
