#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
unsigned long long int var_1 = 107025473386509553ULL;
short var_6 = (short)-23849;
unsigned long long int var_7 = 3497413366591858026ULL;
short var_10 = (short)-5717;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)14;
int zero = 0;
long long int var_18 = 6203851659220119586LL;
unsigned short var_19 = (unsigned short)32115;
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
