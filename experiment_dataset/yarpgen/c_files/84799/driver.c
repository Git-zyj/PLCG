#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned char var_1 = (unsigned char)40;
short var_2 = (short)4264;
short var_3 = (short)-23967;
unsigned long long int var_4 = 14790626175460579101ULL;
unsigned short var_5 = (unsigned short)2884;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)17997;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 2698163596002299082ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)44261;
void init() {
}

void checksum() {
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
