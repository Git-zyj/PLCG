#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_7 = 2403576489U;
unsigned short var_8 = (unsigned short)64760;
unsigned int var_9 = 849447863U;
int zero = 0;
signed char var_13 = (signed char)87;
unsigned long long int var_14 = 18023207998201556491ULL;
unsigned long long int var_15 = 6174956027951868927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
