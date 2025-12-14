#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3699298860U;
signed char var_2 = (signed char)112;
unsigned int var_5 = 4086664251U;
int zero = 0;
unsigned long long int var_12 = 8679209986919995680ULL;
unsigned int var_13 = 1501901415U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 899847318U;
unsigned int var_16 = 241786329U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
