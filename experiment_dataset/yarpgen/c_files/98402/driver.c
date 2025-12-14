#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -493407829;
unsigned int var_1 = 3130965469U;
_Bool var_2 = (_Bool)1;
short var_6 = (short)-17209;
unsigned long long int var_7 = 9743861923931420559ULL;
long long int var_12 = 8975467417174893025LL;
int zero = 0;
long long int var_13 = 2876439047543055087LL;
int var_14 = -1891212169;
signed char var_15 = (signed char)-67;
unsigned short var_16 = (unsigned short)34031;
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
