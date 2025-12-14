#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1677203398;
long long int var_1 = 24174734041757868LL;
int var_3 = 1945498270;
short var_5 = (short)-9370;
short var_6 = (short)-9184;
signed char var_7 = (signed char)105;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)232;
short var_21 = (short)-28765;
short var_22 = (short)-25601;
signed char var_23 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
