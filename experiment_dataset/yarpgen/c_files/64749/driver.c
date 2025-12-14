#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1666556828;
_Bool var_4 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_16 = (short)31160;
short var_17 = (short)1315;
short var_19 = (short)-18927;
int zero = 0;
int var_20 = -49619630;
int var_21 = -1357354161;
short var_22 = (short)-23862;
void init() {
}

void checksum() {
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
