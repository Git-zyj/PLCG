#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned char var_3 = (unsigned char)161;
short var_4 = (short)10997;
long long int var_5 = -62199052993101055LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-14563;
unsigned char var_10 = (unsigned char)77;
unsigned short var_11 = (unsigned short)861;
int zero = 0;
long long int var_12 = -2582671361677607523LL;
unsigned char var_13 = (unsigned char)249;
short var_14 = (short)-30229;
_Bool var_15 = (_Bool)1;
long long int var_16 = 2920043988340782461LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
