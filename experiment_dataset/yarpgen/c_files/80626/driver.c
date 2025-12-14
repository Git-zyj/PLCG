#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28960;
int var_1 = 619166573;
long long int var_6 = 2932791149278891555LL;
unsigned int var_7 = 2397301292U;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 517603317U;
int zero = 0;
signed char var_13 = (signed char)-116;
long long int var_14 = 6307342208913138958LL;
signed char var_15 = (signed char)11;
signed char var_16 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
