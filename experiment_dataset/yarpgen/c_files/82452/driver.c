#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1777044826U;
unsigned int var_5 = 862379214U;
unsigned int var_9 = 2097106873U;
unsigned long long int var_11 = 11232717881000892065ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 13083857302516097235ULL;
void init() {
}

void checksum() {
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
