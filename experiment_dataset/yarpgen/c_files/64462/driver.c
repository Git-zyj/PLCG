#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5513714026295351156LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)50677;
unsigned int var_6 = 3015638963U;
unsigned int var_8 = 556636185U;
int var_10 = -1538371971;
int var_11 = 1817752970;
int var_12 = 966716564;
unsigned int var_15 = 572855159U;
int zero = 0;
unsigned int var_18 = 4143661511U;
int var_19 = 1789073526;
short var_20 = (short)-28074;
short var_21 = (short)4669;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
