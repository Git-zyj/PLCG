#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 426889196;
short var_5 = (short)13977;
long long int var_7 = 8021348796850143283LL;
short var_8 = (short)-15574;
short var_11 = (short)12846;
unsigned int var_14 = 519204279U;
int zero = 0;
unsigned int var_18 = 2932490424U;
long long int var_19 = -2289293403738819935LL;
short var_20 = (short)8205;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
