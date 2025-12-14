#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12232;
unsigned int var_5 = 1949247148U;
short var_7 = (short)-23477;
unsigned long long int var_8 = 17521522601111605522ULL;
int zero = 0;
signed char var_13 = (signed char)-125;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)25459;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
