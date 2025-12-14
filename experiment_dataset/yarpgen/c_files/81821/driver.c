#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4065925071U;
unsigned int var_1 = 2867670085U;
short var_2 = (short)11727;
short var_3 = (short)-4609;
short var_4 = (short)-8669;
_Bool var_5 = (_Bool)1;
long long int var_6 = 3576236472913034201LL;
short var_7 = (short)-22878;
long long int var_8 = 8098344598273651463LL;
short var_9 = (short)-2530;
signed char var_10 = (signed char)42;
short var_11 = (short)-15140;
short var_12 = (short)13850;
int zero = 0;
unsigned int var_13 = 4246552623U;
unsigned short var_14 = (unsigned short)45365;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
