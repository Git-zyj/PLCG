#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -286185028;
unsigned short var_1 = (unsigned short)32095;
long long int var_2 = 7016712265923125577LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 1581322258U;
int zero = 0;
short var_13 = (short)21447;
unsigned char var_14 = (unsigned char)14;
unsigned short var_15 = (unsigned short)29173;
_Bool var_16 = (_Bool)0;
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
