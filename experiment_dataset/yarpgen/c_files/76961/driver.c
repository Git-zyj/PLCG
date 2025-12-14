#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22533;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13350519929183382517ULL;
int zero = 0;
unsigned int var_11 = 2628091283U;
unsigned int var_12 = 2500234661U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
