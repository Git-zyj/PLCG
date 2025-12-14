#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
_Bool var_1 = (_Bool)0;
long long int var_2 = -2647802491234158088LL;
unsigned int var_3 = 1938222399U;
signed char var_7 = (signed char)-7;
int var_10 = 250023859;
unsigned long long int var_11 = 13867335533619128525ULL;
short var_12 = (short)-5650;
int zero = 0;
unsigned char var_19 = (unsigned char)140;
unsigned short var_20 = (unsigned short)48099;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
