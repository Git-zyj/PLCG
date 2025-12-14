#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)2;
int var_5 = -2052930505;
short var_8 = (short)-28719;
long long int var_9 = -1852726548275216992LL;
int var_10 = 1357872693;
unsigned long long int var_12 = 11349835485036978410ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)41373;
unsigned long long int var_17 = 6201977031536383757ULL;
int var_18 = -824135785;
unsigned char var_19 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
