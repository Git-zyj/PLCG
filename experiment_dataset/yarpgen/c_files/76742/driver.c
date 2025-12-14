#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4748816758857988404LL;
unsigned int var_3 = 4225632482U;
signed char var_5 = (signed char)30;
unsigned int var_7 = 1475056318U;
int var_8 = 764466257;
_Bool var_9 = (_Bool)0;
int var_10 = 54623351;
int zero = 0;
int var_15 = -1664864462;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
short var_19 = (short)16573;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
