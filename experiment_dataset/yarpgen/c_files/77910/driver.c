#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)-18393;
short var_5 = (short)1741;
unsigned int var_6 = 3172258905U;
unsigned int var_12 = 3775932624U;
short var_15 = (short)-20127;
short var_16 = (short)3310;
int zero = 0;
unsigned int var_19 = 1332870949U;
signed char var_20 = (signed char)-124;
_Bool var_21 = (_Bool)1;
int var_22 = -1500588935;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
