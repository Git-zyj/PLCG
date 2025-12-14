#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1553215158;
short var_14 = (short)1626;
unsigned int var_16 = 1065151194U;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-80;
unsigned long long int var_20 = 13689162211498068522ULL;
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
