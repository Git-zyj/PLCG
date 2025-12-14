#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3821543043U;
_Bool var_5 = (_Bool)1;
long long int var_9 = -2918653441920439410LL;
int zero = 0;
unsigned long long int var_13 = 14851410914077683591ULL;
short var_14 = (short)13176;
unsigned char var_15 = (unsigned char)112;
unsigned char var_16 = (unsigned char)221;
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
