#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
signed char var_3 = (signed char)98;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)84;
unsigned char var_7 = (unsigned char)43;
signed char var_8 = (signed char)-22;
unsigned short var_9 = (unsigned short)29091;
short var_10 = (short)-32418;
unsigned int var_12 = 1707686528U;
unsigned long long int var_14 = 5632702346853297993ULL;
unsigned short var_15 = (unsigned short)26777;
int zero = 0;
unsigned int var_16 = 1531673497U;
unsigned short var_17 = (unsigned short)38796;
short var_18 = (short)-171;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
