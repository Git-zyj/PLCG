#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30898;
unsigned long long int var_2 = 18342620051977525759ULL;
int var_7 = -877883841;
unsigned int var_9 = 2524119807U;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-22485;
int zero = 0;
unsigned long long int var_20 = 5942477144230224022ULL;
unsigned short var_21 = (unsigned short)33540;
void init() {
}

void checksum() {
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
