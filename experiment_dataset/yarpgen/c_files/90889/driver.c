#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2675868441U;
long long int var_1 = 9116317210562379944LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 3187175967366203872LL;
signed char var_11 = (signed char)-101;
unsigned int var_12 = 2342690455U;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-26219;
short var_15 = (short)30245;
unsigned long long int var_16 = 3066058839710743376ULL;
signed char var_17 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
