#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
short var_5 = (short)-16012;
int var_10 = 1177518554;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 3802832562U;
long long int var_18 = -8849782892540776894LL;
unsigned long long int var_19 = 1219003697824305188ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
