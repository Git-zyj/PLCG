#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 694351561958226004LL;
_Bool var_1 = (_Bool)1;
int var_4 = 745784975;
unsigned long long int var_5 = 18376304498314649964ULL;
unsigned char var_6 = (unsigned char)147;
unsigned char var_7 = (unsigned char)40;
unsigned int var_12 = 681475440U;
int zero = 0;
unsigned long long int var_14 = 5731342530184512982ULL;
unsigned int var_15 = 1090265636U;
short var_16 = (short)-14610;
signed char var_17 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
