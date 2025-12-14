#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)85;
unsigned short var_3 = (unsigned short)5622;
unsigned long long int var_5 = 5699507272087906267ULL;
short var_7 = (short)21528;
unsigned short var_8 = (unsigned short)56384;
unsigned char var_10 = (unsigned char)101;
unsigned long long int var_14 = 15813189685292191114ULL;
short var_15 = (short)-3933;
short var_16 = (short)23824;
unsigned short var_17 = (unsigned short)31968;
unsigned int var_19 = 1403059952U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)214;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
int var_24 = 832570160;
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
