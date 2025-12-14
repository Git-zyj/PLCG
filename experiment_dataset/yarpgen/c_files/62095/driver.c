#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18283;
short var_6 = (short)-7697;
unsigned int var_7 = 1536024232U;
short var_9 = (short)2495;
unsigned int var_12 = 3313389351U;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)229;
short var_21 = (short)27360;
short var_22 = (short)-12663;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
