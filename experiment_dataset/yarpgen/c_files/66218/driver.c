#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
short var_1 = (short)25628;
int var_3 = 143439642;
signed char var_5 = (signed char)-80;
short var_6 = (short)-23985;
signed char var_8 = (signed char)107;
int var_9 = -1744237;
unsigned int var_10 = 3747927620U;
int zero = 0;
unsigned short var_11 = (unsigned short)29649;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)53067;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
