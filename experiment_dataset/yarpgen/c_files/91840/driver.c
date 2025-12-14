#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)254;
unsigned char var_5 = (unsigned char)97;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)92;
unsigned char var_8 = (unsigned char)22;
short var_9 = (short)-1857;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-96;
unsigned char var_13 = (unsigned char)212;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)126;
signed char var_18 = (signed char)58;
short var_19 = (short)-31295;
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
