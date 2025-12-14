#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22194;
unsigned int var_5 = 2634800775U;
unsigned short var_6 = (unsigned short)47063;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4202014619746181621ULL;
long long int var_11 = 3752457163003905256LL;
unsigned int var_12 = 1371003229U;
short var_13 = (short)9414;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3161317125U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
