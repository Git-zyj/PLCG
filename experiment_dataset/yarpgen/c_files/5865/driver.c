#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1713649827U;
signed char var_2 = (signed char)-17;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-30451;
unsigned int var_7 = 184529787U;
signed char var_8 = (signed char)113;
unsigned char var_11 = (unsigned char)121;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)122;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-8317;
void init() {
}

void checksum() {
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
