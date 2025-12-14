#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 6818043285893110754ULL;
signed char var_4 = (signed char)110;
unsigned long long int var_5 = 15483426957599130237ULL;
unsigned short var_6 = (unsigned short)63366;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2843659787U;
signed char var_11 = (signed char)63;
int zero = 0;
unsigned long long int var_12 = 6674994415635348936ULL;
signed char var_13 = (signed char)97;
int var_14 = 825041255;
unsigned short var_15 = (unsigned short)21618;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
