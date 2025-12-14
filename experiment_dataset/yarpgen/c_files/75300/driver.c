#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54673;
short var_1 = (short)-23565;
signed char var_2 = (signed char)115;
unsigned int var_3 = 1406607500U;
unsigned long long int var_4 = 11881532609221157994ULL;
int var_6 = 1797103657;
unsigned char var_11 = (unsigned char)55;
int var_13 = 1173339082;
unsigned short var_14 = (unsigned short)32796;
long long int var_15 = -9188655296726693004LL;
int zero = 0;
int var_16 = 689658804;
short var_17 = (short)23028;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
