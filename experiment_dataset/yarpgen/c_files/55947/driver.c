#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5208768658176277836LL;
signed char var_3 = (signed char)28;
short var_4 = (short)-4484;
unsigned short var_6 = (unsigned short)55019;
unsigned short var_7 = (unsigned short)39570;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)15027;
unsigned char var_13 = (unsigned char)138;
int zero = 0;
unsigned int var_14 = 1126454166U;
unsigned char var_15 = (unsigned char)93;
int var_16 = -1883638301;
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
